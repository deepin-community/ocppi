// Thish file is generated by /tools/codegen
// DO NOT EDIT IT.

// clang-format off

//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ContainerListItem.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <nlohmann/json.hpp>
#include "ocppi/types/helper.hpp"

namespace ocppi {
namespace types {
using nlohmann::json;

struct ContainerListItem {
std::string bundle;
std::string created;
std::string id;
std::string owner;
int64_t pid;
std::string status;
};
}
}

// clang-format on
