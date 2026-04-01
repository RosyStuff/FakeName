cmake_minimum_required(VERSION 3.25)

# This sets up the Geode SDK
find_package(Geode REQUIRED PATHS ${GEODE_SDK})

# Replace 'yourname.fakename' with the EXACT ID from your mod.json
project(rosy.fakename)

# This adds your mod
add_geode_mod(
    ${PROJECT_NAME}
    SOURCES main.cpp
)
