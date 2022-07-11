cmake_minimum_required(VERSION 3.10)

project(walnut)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "-O2")

find_package(Vulkan REQUIRED)
find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)

set(LIBS Vulkan::Vulkan ${GLM_LIBRARIES} glfw)

add_subdirectory(Walnut)
add_subdirectory(WalnutApp)


