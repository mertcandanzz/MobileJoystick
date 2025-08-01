package io.github.kitswas.virtualgamepadmobile.ui.screens

import android.net.InetAddresses
import android.os.Build
import android.util.Log
import android.util.Patterns
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.text.KeyboardActions
import androidx.compose.foundation.text.KeyboardOptions
import androidx.compose.material3.Button
import androidx.compose.material3.Scaffold
import androidx.compose.material3.SnackbarDuration
import androidx.compose.material3.SnackbarHost
import androidx.compose.material3.SnackbarHostState
import androidx.compose.material3.Text
import androidx.compose.material3.TextField
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.runtime.saveable.rememberSaveable
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.focus.FocusDirection
import androidx.compose.ui.graphics.RectangleShape
import androidx.compose.ui.platform.LocalFocusManager
import androidx.compose.ui.text.input.ImeAction
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.navigation.NavHostController
import androidx.navigation.compose.rememberNavController
import com.google.mlkit.vision.codescanner.GmsBarcodeScanner
import io.github.kitswas.virtualgamepadmobile.data.PreviewBase
import io.github.kitswas.virtualgamepadmobile.data.PreviewHeightDp
import io.github.kitswas.virtualgamepadmobile.data.PreviewWidthDp
import io.github.kitswas.virtualgamepadmobile.network.ConnectionViewModel
import kotlinx.coroutines.CoroutineExceptionHandler
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch

private fun getIP(qrCode: String): String {
    val splitTill = qrCode.lastIndexOf(":")
    if (splitTill == -1) return qrCode
    return qrCode.substring(0, splitTill)
}

private fun getPort(qrCode: String): String {
    val splitAt = qrCode.lastIndexOf(":")
    if (splitAt == -1) return qrCode
    return qrCode.substring(splitAt + 1)
}

@Suppress("DEPRECATION")
fun validateIP(ipAddress: String): Boolean {
    return if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
        InetAddresses.isNumericAddress(ipAddress)
    } else {
        Patterns.IP_ADDRESS.matcher(ipAddress).matches()
    }
}

fun validatePort(port: String): Boolean {
    val minPort = 1
    val maxPort = 65535
    return port.toIntOrNull().let { it != null && it in minPort..maxPort }
}

private fun attemptToConnect(
    navController: NavHostController,
    connectionViewModel: ConnectionViewModel?,
    ipAddress: String,
    port: String,
    exceptionHandler: CoroutineExceptionHandler
) {
    if (connectionViewModel != null) {
        CoroutineScope(Dispatchers.IO + exceptionHandler).launch {
            connectionViewModel.connect(ipAddress, port.toInt())
            // The above can throw IOException, handle it

        }.invokeOnCompletion {
            CoroutineScope(Dispatchers.Main).launch {
                // Update UI elements
                if (connectionViewModel.uiState.value.connected) {
                    navController.navigate("gamepad")
                }
            }
        }
    }
}

@Composable
fun ConnectMenu(
    navController: NavHostController = rememberNavController(),
    scanner: GmsBarcodeScanner?,
    connectionViewModel: ConnectionViewModel?
) {
    val snackbarHostState = remember { SnackbarHostState() }
    val scope = rememberCoroutineScope()

    fun logScannerUnavailable() {
        val message = "Google Code Scanner unavailable"
        Log.d("ConnectMenu", message)
        CoroutineScope(Dispatchers.Main).launch {
            snackbarHostState.showSnackbar(
                duration = SnackbarDuration.Short,
                message = message,
            )
        }
    }

    Scaffold(
        snackbarHost = {
            SnackbarHost(hostState = snackbarHostState)
        }
    ) { contentPadding ->
        // Ignore contentPadding as we want to fill the screen

        Column(
            modifier = Modifier.fillMaxSize(),
            horizontalAlignment = Alignment.CenterHorizontally,
            verticalArrangement = Arrangement.Center
        ) {
            var ipAddress by rememberSaveable { mutableStateOf("") }
            var port by rememberSaveable { mutableStateOf("") }
            var isIPValid by rememberSaveable { mutableStateOf(false) }
            var isPortValid by rememberSaveable { mutableStateOf(false) }
            val focusManager = LocalFocusManager.current

            Button(onClick = {
                val task = scanner?.startScan()
                if (scanner == null || task == null) {
                    logScannerUnavailable()
                }
                task!!.addOnSuccessListener {
                    val qrCode = it.rawValue ?: ""
                    Log.d("Scanned QR Code", qrCode)
                    ipAddress = getIP(qrCode)
                    port = getPort(qrCode)
                    // recalculate validity
                    isIPValid = validateIP(ipAddress)
                    isPortValid = validatePort(port)
                }.addOnFailureListener { logScannerUnavailable() }
            }, shape = CircleShape) {
                Text(text = "QR KODU OKUT")
            }

            TextField(
                label = { Text(text = "IP ADRESI") },
                value = ipAddress,
                onValueChange = {
                    ipAddress = it
                    isIPValid = validateIP(ipAddress)
                },
                keyboardOptions = KeyboardOptions(
                    imeAction = ImeAction.Next
                ),
                keyboardActions = KeyboardActions(
                    onNext = {
                        // Pressing Ime button would move the text indicator's focus to the bottom
                        // field, if it exists!
                        focusManager.moveFocus(FocusDirection.Down)
                    }
                ),
                shape = RectangleShape,
                modifier = Modifier.padding(0.dp, 5.dp),
                isError = !isIPValid
            )

            TextField(
                label = { Text(text = "Port") },
                value = port,
                onValueChange = {
                    port = it
                    isPortValid = validatePort(port)
                },
                keyboardOptions = KeyboardOptions(
                    imeAction = ImeAction.Done
                ),
                keyboardActions = KeyboardActions(
                    onDone = {
                        focusManager.clearFocus()
                        attemptToConnect(
                            navController, connectionViewModel, ipAddress, port,
                            CoroutineExceptionHandler { _, e ->
                                scope.launch {
                                    snackbarHostState.showSnackbar(
                                        duration = SnackbarDuration.Short,
                                        message = e.message
                                            ?: "Failed to connect to server: ${e.cause}",
                                    )
                                }
                            }
                        )
                    }
                ),
                shape = RectangleShape,
                modifier = Modifier.padding(0.dp, 5.dp),
                isError = !isPortValid
            )

            Button(
                onClick =
                {
                    attemptToConnect(
                        navController, connectionViewModel, ipAddress, port,
                        CoroutineExceptionHandler { _, e ->
                            scope.launch {
                                snackbarHostState.showSnackbar(
                                    duration = SnackbarDuration.Short,
                                    message = e.message
                                        ?: "Failed to connect to server: ${e.cause}",
                                )
                            }
                        }
                    )
                },
                shape = CircleShape,
                enabled = isIPValid && isPortValid,
            ) {
                Text(text = "BAGLAN")
            }

        }
    }
}

@Preview(
    widthDp = PreviewWidthDp,
    heightDp = PreviewHeightDp,
)
@Composable
fun ConnectMenuPreview() {
    PreviewBase {
        ConnectMenu(scanner = null, connectionViewModel = null)
    }
}
