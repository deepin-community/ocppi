// Thish file is generated by /tools/codegen
// DO NOT EDIT IT.

// clang-format off

//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Root.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <nlohmann/json.hpp>
#include "ocppi/runtime/config/types/helper.hpp"

namespace ocppi {
namespace runtime {
namespace config {
namespace types {
/**
* Configures the container's root filesystem.
*/

using nlohmann::json;

/**
* Configures the container's root filesystem.
*/
struct Root {
std::string path;
std::optional<bool> readonly;
};
}
}
}
}

// clang-format on
