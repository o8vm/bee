#include "sail_riscv_version.h"

namespace version_info {

std::string_view release_version() {
  return "0.13.1";
}

std::string_view git_version() {
  return "8d0ded1";
}

std::string_view sail_version() {
  return "Sail 0.20.2 (HEAD @ 8eb1fb6b5bf9f18c0f89f71e94ff0c5894acd7c1)";
}

std::string_view cxx_compiler_version() {
  return "GNU 13.3.0";
}

}
