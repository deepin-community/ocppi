// Thish file is generated by /tools/codegen
// DO NOT EDIT IT.

// clang-format off

//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     BlockIO.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <nlohmann/json.hpp>
#include "ocppi/runtime/config/types/helper.hpp"

#include "ocppi/runtime/config/types/BlockIODeviceThrottle.hpp"
#include "ocppi/runtime/config/types/BlockIODeviceWeight.hpp"

namespace ocppi {
namespace runtime {
namespace config {
namespace types {
using nlohmann::json;

struct BlockIO {
std::optional<int64_t> leafWeight;
std::optional<std::vector<BlockIODeviceThrottle>> throttleReadBpsDevice;
std::optional<std::vector<BlockIODeviceThrottle>> throttleReadIOPSDevice;
std::optional<std::vector<BlockIODeviceThrottle>> throttleWriteBpsDevice;
std::optional<std::vector<BlockIODeviceThrottle>> throttleWriteIOPSDevice;
std::optional<int64_t> weight;
std::optional<std::vector<BlockIODeviceWeight>> weightDevice;
};
}
}
}
}

// clang-format on
