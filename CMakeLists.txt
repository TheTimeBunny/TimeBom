# CMakeList.txt : CMake project for TimeBom, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("TimeBom")

# Add source to this project's executable.
add_executable (TimeBom "TimeBom.cpp" "TimeBom.h" "src/logic/include.h" "src/GameSpecific/include.h" "src/logic/src/pathfinding.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET TimeBom PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
