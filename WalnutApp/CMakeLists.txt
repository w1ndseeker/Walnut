project(walnutapp)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../vendor/imgui)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../vendor/imgui/backends)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../Walnut/src)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src DIR_SRC)

add_executable(walnut_demo ${DIR_SRC})

target_link_libraries(walnut_demo walnut)


