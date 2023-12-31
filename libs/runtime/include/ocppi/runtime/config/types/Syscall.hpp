// Thish file is generated by /tools/codegen
// DO NOT EDIT IT.

// clang-format off

//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Syscall.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <nlohmann/json.hpp>
#include "ocppi/runtime/config/types/helper.hpp"

#include "ocppi/runtime/config/types/SyscallArg.hpp"

namespace ocppi {
namespace runtime {
namespace config {
namespace types {
enum class SeccompAction : int;
}
}
}
}

namespace ocppi {
namespace runtime {
namespace config {
namespace types {
using nlohmann::json;

struct Syscall {
SeccompAction action;
std::optional<std::vector<SyscallArg>> args;
std::optional<int64_t> errnoRet;
std::vector<std::string> names;
};
}
}
}
}

// clang-format on
