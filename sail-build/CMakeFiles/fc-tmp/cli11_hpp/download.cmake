cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

message(VERBOSE "Executing download step for cli11_hpp")

block(SCOPE_FOR VARIABLES)

include("/home/runner/work/bee/bee/sail-build/CMakeFiles/fc-stamp/cli11_hpp/download-cli11_hpp.cmake")
include("/home/runner/work/bee/bee/sail-build/CMakeFiles/fc-stamp/cli11_hpp/verify-cli11_hpp.cmake")
file(COPY_FILE
  "/home/runner/work/bee/bee/sail-build/_deps/cli11_hpp-tmp/CLI11.hpp"
  "/home/runner/work/bee/bee/sail-build/_deps/cli11_hpp-src/CLI11.hpp"
  ONLY_IF_DIFFERENT
  INPUT_MAY_BE_RECENT
)

endblock()
