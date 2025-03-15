# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "")
  file(REMOVE_RECURSE
  "CMakeFiles/Scientific_Calculator_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Scientific_Calculator_autogen.dir/ParseCache.txt"
  "Scientific_Calculator_autogen"
  )
endif()
