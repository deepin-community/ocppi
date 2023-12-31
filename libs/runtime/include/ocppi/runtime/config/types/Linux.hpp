// Thish file is generated by /tools/codegen
// DO NOT EDIT IT.

// clang-format off

//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Linux.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <nlohmann/json.hpp>
#include "ocppi/runtime/config/types/helper.hpp"

#include "ocppi/runtime/config/types/LinuxDevice.hpp"
#include "ocppi/runtime/config/types/IdMapping.hpp"
#include "ocppi/runtime/config/types/IntelRdt.hpp"
#include "ocppi/runtime/config/types/NamespaceReference.hpp"
#include "ocppi/runtime/config/types/Personality.hpp"
#include "ocppi/runtime/config/types/LinuxResources.hpp"
#include "ocppi/runtime/config/types/Seccomp.hpp"
#include "ocppi/runtime/config/types/TimeOffsets.hpp"

namespace ocppi {
namespace runtime {
namespace config {
namespace types {
enum class RootfsPropagation : int;
}
}
}
}

namespace ocppi {
namespace runtime {
namespace config {
namespace types {
/**
* Linux platform-specific configurations
*/

using nlohmann::json;

/**
* Linux platform-specific configurations
*/
struct Linux {
std::optional<std::string> cgroupsPath;
std::optional<std::vector<LinuxDevice>> devices;
std::optional<std::vector<IdMapping>> gidMappings;
std::optional<IntelRdt> intelRdt;
std::optional<std::vector<std::string>> maskedPaths;
std::optional<std::string> mountLabel;
std::optional<std::vector<NamespaceReference>> namespaces;
std::optional<Personality> personality;
std::optional<std::vector<std::string>> readonlyPaths;
std::optional<LinuxResources> resources;
std::optional<RootfsPropagation> rootfsPropagation;
std::optional<Seccomp> seccomp;
std::optional<std::map<std::string, std::string>> sysctl;
std::optional<TimeOffsets> timeOffsets;
std::optional<std::vector<IdMapping>> uidMappings;
};
}
}
}
}

// clang-format on
