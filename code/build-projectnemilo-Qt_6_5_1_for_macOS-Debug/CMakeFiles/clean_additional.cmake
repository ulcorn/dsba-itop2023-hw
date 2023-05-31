# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/projectnemilo_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/projectnemilo_autogen.dir/ParseCache.txt"
  "projectnemilo_autogen"
  )
endif()
