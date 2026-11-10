cmake_minimum_required(VERSION 3.22)
project(PvzPortableMod LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(SDL2 REQUIRED)
add_executable(pvz_portable_mod
 src/main.cpp
 src/mod/ModConfig.cpp
 src/mod/ModMenu.cpp
 src/entities/ZombieTypes.cpp
 src/entities/PlantAbilities.cpp
 src/game/GameIntegration.cpp)
target_include_directories(pvz_portable_mod PRIVATE src)
target_link_libraries(pvz_portable_mod PRIVATE SDL2::SDL2)
