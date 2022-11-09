project(walnut)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS  "-fPIC" )

file(GLOB_RECURSE SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*/*/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*/*.cc"
)

set(IMGUI_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../vendor/imgui)
# ${IMGUI_DIR}/backends/imgui_impl_glfw.cpp
# ${IMGUI_DIR}/backends/imgui_impl_vulkan.cpp
set(IMGUI_SRC
        ${IMGUI_DIR}/imgui.cpp
        ${IMGUI_DIR}/imgui_draw.cpp
        ${IMGUI_DIR}/imgui_demo.cpp
        ${IMGUI_DIR}/imgui_tables.cpp
        ${IMGUI_DIR}/imgui_widgets.cpp
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../vendor/imgui)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../vendor/imgui/backends)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../vendor/stb_image)


add_library(walnut STATIC ${SOURCES} ${IMGUI_SRC})
target_link_libraries(walnut ${LIBS})

