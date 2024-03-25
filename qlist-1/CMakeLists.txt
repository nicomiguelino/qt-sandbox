cmake_minimum_required(VERSION 3.0)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)

set (main-src main.cpp)

find_package(QT NAMES Qt6 COMPOnclude NENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

add_executable(main main.cpp)

target_link_libraries(main Qt${QT_VERSION_MAJOR}::Core)
