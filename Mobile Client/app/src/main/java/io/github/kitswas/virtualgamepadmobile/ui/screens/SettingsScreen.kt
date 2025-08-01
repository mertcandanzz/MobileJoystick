package io.github.kitswas.virtualgamepadmobile.ui.screens

import android.util.Log
import androidx.compose.foundation.layout.*
import androidx.compose.material3.*
import androidx.compose.runtime.*
import androidx.compose.ui.*
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.tooling.preview.Preview
import androidx.navigation.NavController
import androidx.navigation.compose.rememberNavController
import io.github.kitswas.virtualgamepadmobile.data.BaseColor
import io.github.kitswas.virtualgamepadmobile.data.PreviewBase
import io.github.kitswas.virtualgamepadmobile.data.PreviewHeightDp
import io.github.kitswas.virtualgamepadmobile.data.PreviewWidthDp
import io.github.kitswas.virtualgamepadmobile.data.SettingsRepository
import io.github.kitswas.virtualgamepadmobile.data.defaultBaseColor
import io.github.kitswas.virtualgamepadmobile.data.defaultColorScheme
import io.github.kitswas.virtualgamepadmobile.ui.composables.ColorSchemePicker
import io.github.kitswas.virtualgamepadmobile.ui.composables.ListItemPicker
import kotlinx.coroutines.*

@Composable
fun SettingsScreen(
    navController: NavController = rememberNavController(), settingsRepository: SettingsRepository
) {
    Column(
        modifier = Modifier.fillMaxSize(),
        verticalArrangement = Arrangement.SpaceAround,
        horizontalAlignment = Alignment.CenterHorizontally
    ) {
        // Store pending settings modifications in a queue
        val saveJobsQueue = remember { mutableListOf<suspend CoroutineScope.() -> Unit>() }
        val colorScheme = settingsRepository.colorScheme.collectAsState(defaultColorScheme).value
        val baseColor = settingsRepository.baseColor.collectAsState(defaultBaseColor).value

        Text("AYARLAR", style = MaterialTheme.typography.titleLarge)

        ColorSchemePicker(default = colorScheme) {
            saveJobsQueue.add {
                launch(Dispatchers.IO) {
                    settingsRepository.setColorScheme(it)
                }
            }
        }

        ListItemPicker(list = BaseColor.entries.asIterable(),
            default = baseColor,
            label = "Theme Color",
            onItemSelected = {
                saveJobsQueue.add {
                    launch(Dispatchers.IO) {
                        settingsRepository.setBaseColor(it)
                    }
                }
            })

        Row(
            modifier = Modifier.fillMaxWidth(), horizontalArrangement = Arrangement.SpaceEvenly
        ) {
            Button(onClick = {
                saveJobsQueue.clear()
                runBlocking { settingsRepository.resetAllSettings() }
            }) {
                Text("SIFIRLA")
            }

            Button(onClick = {
                val success = runBlocking {
                    saveJobsQueue.forEach { it() }
                    saveJobsQueue.clear()
                    true
                }
                Log.i("SettingsScreen", "Saved settings: $success")
            }) {
                Text("ONAYLA")
            }

            Button(onClick = {
                saveJobsQueue.clear()
                navController.popBackStack()
            }) {
                Text("VAZGEC")
            }
        }
    }
}


@Preview(
    widthDp = PreviewWidthDp,
    heightDp = PreviewHeightDp,
)
@Composable
fun SettingsScreenPreview() {
    PreviewBase {
        SettingsScreen(settingsRepository = SettingsRepository(LocalContext.current))
    }
}
