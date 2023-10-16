// Thish file is generated by /tools/codegen
// DO NOT EDIT IT.

// clang-format off

//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WindowsNetwork.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <nlohmann/json.hpp>
#include "ocppi/runtime/config/types/helper.hpp"

namespace ocppi {
namespace runtime {
namespace config {
namespace types {
using nlohmann::json;

struct WindowsNetwork {
std::optional<bool> allowUnqualifiedDNSQuery;
std::optional<std::vector<std::string>> dnsSearchList;
std::optional<std::vector<std::string>> endpointList;
std::optional<std::string> networkNamespace;
std::optional<std::string> networkSharedContainerName;
};
}
}
}
}

// clang-format on
