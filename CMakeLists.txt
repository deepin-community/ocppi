cmake_minimum_required(VERSION 3.23)

project(
  ocppi
  LANGUAGES CXX
  VERSION 0.1.8)

option(OCPPI_BUILD_EXAMPLES "Build examples of ocppi or not"
       ${PROJECT_IS_TOP_LEVEL})

option(OCPPI_ENABLE_TESTING "Enable test of ocppi or not"
       ${PROJECT_IS_TOP_LEVEL})

option(OCPPI_BUILD_SHARED_LIBRARY "Build a shared library or not"
       ${PROJECT_IS_TOP_LEVEL})

option(OCPPI_INSTALL "Enable install target or not" ${PROJECT_IS_TOP_LEVEL})

include(./cmake/CPM.cmake)

CPMFindPackage(
  NAME expected
  VERSION 1.0.0
  GITHUB_REPOSITORY TartanLlama/expected
  GIT_TAG v1.1.0
  GIT_SHALLOW ON
  OPTIONS "EXPECTED_BUILD_TESTS OFF"
  FIND_PACKAGE_ARGUMENTS "NAMES tl-expected"
  EXCLUDE_FROM_ALL ON)

CPMFindPackage(
  NAME semver
  VERSION 0.3.0
  GITHUB_REPOSITORY Neargye/Semver
  GIT_TAG v0.3.0
  GIT_SHALLOW ON
  EXCLUDE_FROM_ALL ON)

CPMFindPackage(
  NAME nlohmann_json
  VERSION 3.11.2
  GITHUB_REPOSITORY nlohmann/json
  GIT_TAG v3.11.2
  GIT_SHALLOW ON
  EXCLUDE_FROM_ALL ON)

CPMFindPackage(
  NAME Catch2
  VERSION 2.13.10
  GITHUB_REPOSITORY catchorg/Catch2
  GIT_TAG v2.13.10
  GIT_SHALLOW ON
  EXCLUDE_FROM_ALL ON)

CPMFindPackage(
  NAME Boost COMPONENTS process
  VERSION 1.74.0
  GITHUB_REPOSITORY "boostorg/boost"
  GIT_TAG "boost-1.81.0"
  GIT_SHALLOW ON
  EXCLUDE_FROM_ALL ON)

if(NOT TARGET Boost::process)
  add_library(Boost::process ALIAS Boost::headers)
endif()

CPMFindPackage(
  NAME spdlog
  VERSION 1.10.0
  GITHUB_REPOSITORY "gabime/spdlog"
  GIT_TAG "v1.10.0"
  GIT_SHALLOW ON
  EXCLUDE_FROM_ALL ON)

include(./cmake/GitSemver.cmake)

set(OCPPI_SEMVER ${PROJECT_VERSION})
gitsemver(OCPPI_SEMVER)

set(OCPPI_OCI_RUNTIME_SPEC_MIN "1.0.0")
set(OCPPI_OCI_RUNTIME_SPEC_MAX "1.1.0")
set(OCPPI_LIBRARY_TYPE "STATIC")
if(OCPPI_BUILD_SHARED_LIBRARY)
  set(OCPPI_LIBRARY_TYPE "SHARED")
endif()
set(OCPPI_SOVERSION 1)

set(CMAKE_CXX_FLAGS_DEBUG "-DSPDLOG_ACTIVE_LEVEL=SPDLOG_LEVEL_TRACE")

include(./cmake/PFL.cmake)

set(OCPPI_LIBS common runtime cli)
pfl_init(ENABLE_TESTING ${OCPPI_ENABLE_TESTING} BUILD_EXAMPLES
         ${OCPPI_BUILD_EXAMPLES} INSTALL ${OCPPI_INSTALL})
pfl_add_libraries(VERSION ${PROJECT_VERSION} LIBS ${OCPPI_LIBS})
