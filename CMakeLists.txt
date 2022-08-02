cmake_minimum_required (VERSION 3.6)


# set project anme
project (Galileo)

# setup version numbers
set(VERSION_MAJOR 1)
set(VERSION_MINOR 0)
set(VERSION_PATCH 0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# add galileo header path
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/galileo/common)

list(APPEND CMAKE_PREFIX_PATH "C:/Qt/6.3.1/msvc2019_64")

# add the subdirectories
add_subdirectory(src/galileo)