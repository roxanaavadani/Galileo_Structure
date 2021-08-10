set(INCROOT ${PROJECT_SOURCE_DIR}/include/Galileo/Application)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/Galileo/Application)

# all source files
file(GLOB INCS "${INCROOT}/*.h")
file(GLOB SRCS "${SRCROOT}/*.cpp")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${Galileo_SOURCE_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${Galileo_SOURCE_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${Galileo_SOURCE_DIR}/bin")

set(QT_DIR ${Qt6_DIR})
set(Qt6WidgetsTools_DIR "${Qt6_DIR}WidgetsTools")
set(Qt6CoreTools_DIR "${Qt6_DIR}CoreTools")
set(Qt6GuiTools_DIR "${Qt6_DIR}GuiTools")

set(Qt6WidgetsTools_DIR "${Qt6_DIR}WidgetsTools")
set(Qt6CoreTools_DIR "${Qt6_DIR}CoreTools")
set(Qt6GuiTools_DIR "${Qt6_DIR}GuiTools")

# Find the QtWidgets library
find_package(Qt6 COMPONENTS Core Widgets REQUIRED)

# Tell CMake to run moc when necessary:
set(CMAKE_AUTOMOC ON)
# Tell CMake to UI compiler when necessary:
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOUIC_SEARCH_PATHS ${PROJECT_SOURCE_DIR}/design)

# As moc files are generated in the binary dir, tell CMake
# to always look for includes there:
include_directories("${Galileo_SOURCE_DIR}/bin")

add_library(Application SHARED ${SRCS} ${INCS})

target_link_libraries(Application Framework Qt6::Widgets Qt6::Core)