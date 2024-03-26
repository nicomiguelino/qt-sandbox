cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 20)

# TODO: Make use of the `add_library` command to create a library from the source files in the `lib` directory.

find_package(QT NAMES Qt6 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)

set(data-structures-srcs
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/stack.cpp)

add_executable(main main.cpp ${data-structures-srcs})

target_link_libraries(main Qt${QT_VERSION_MAJOR}::Core)
