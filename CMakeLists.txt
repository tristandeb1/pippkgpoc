cmake_minimum_required(VERSION 3.31)
project(PipPkgPoC VERSION 1.2.3 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 14)

find_package(Boost CONFIG REQUIRED)
find_package(azure-identity-cpp CONFIG REQUIRED)
find_package(azure-storage-blobs-cpp CONFIG REQUIRED)
find_package(azure-storage-files-shares-cpp CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)
find_package(spdlog CONFIG REQUIRED)

add_executable(pippkgpoc src/main.cpp)

target_link_libraries(pippkgpoc PRIVATE
    ${Boost_LIBRARIES}
    Azure::azure-identity
    Azure::azure-storage-blobs
    Azure::azure-storage-files-shares
    fmt::fmt
    spdlog::spdlog)

install(TARGETS pippkgpoc RUNTIME DESTINATION "./pippkgpoc")
