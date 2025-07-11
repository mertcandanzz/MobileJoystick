# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "")
  file(REMOVE_RECURSE
  "CMakeFiles\\QR_Code_Generator_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QR_Code_Generator_autogen.dir\\ParseCache.txt"
  "CMakeFiles\\VGamepadPC_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\VGamepadPC_autogen.dir\\ParseCache.txt"
  "QR_Code_Generator_autogen"
  "VGP_Data_Exchange\\C\\CMakeFiles\\Data_Exchange_autogen.dir\\AutogenUsed.txt"
  "VGP_Data_Exchange\\C\\CMakeFiles\\Data_Exchange_autogen.dir\\ParseCache.txt"
  "VGP_Data_Exchange\\C\\Data_Exchange_autogen"
  "VGamepadPC_autogen"
  )
endif()
