set(INCROOT ${PROJECT_SOURCE_DIR}/include/Galileo/Loader)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/Galileo/Loader)

# all source files
set(SRC
    ${SRCROOT}/main.cpp
)

source_group("" FILES ${SRC})

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${Galileo_SOURCE_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${Galileo_SOURCE_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${Galileo_SOURCE_DIR}/bin")

include_directories("${Galileo_SOURCE_DIR}/bin")

add_executable(Loader ${SRC})

target_link_libraries(Loader)