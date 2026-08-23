#include "sail_riscv_version.h"

namespace version_info {

std::string_view release_version() {
  return "0.13.1";
}

std::string_view git_version() {
  return "aeb2151";
}

std::string_view sail_version() {
  return "Sail 0.20.2 (sail2 @ 3b7af38d66466ecadad563158b07ce2f82fe05da)";
}

std::string_view cxx_compiler_version() {
  return "GNU 13.3.0";
}

}
