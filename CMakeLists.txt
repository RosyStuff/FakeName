cmake_minimum_required(VERSION 3.25)

# This is the "Magic Line" that tells the cloud where Geode is
set(Geode_DIR $ENV{GEODE_SDK})

find_package(Geode REQUIRED)

# MAKE SURE THIS MATCHES YOUR mod.json ID EXACTLY
project(rosy.fakename) 

add_geode_mod(
    ${PROJECT_NAME}
    SOURCES main.cpp
)
