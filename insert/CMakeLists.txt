# CMakeList.txt : CMake project for insert, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (insert "insert.cpp" "insert.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET insert PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
