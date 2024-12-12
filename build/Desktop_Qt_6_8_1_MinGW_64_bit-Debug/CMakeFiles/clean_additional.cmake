# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Russia_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Russia_autogen.dir\\ParseCache.txt"
  "Russia_autogen"
  )
endif()
