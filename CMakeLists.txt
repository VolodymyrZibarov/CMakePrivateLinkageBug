cmake_minimum_required(VERSION 3.21.1)

project(CMakePrivateLinkageBug)

set(CMAKE_POSITION_INDEPENDENT_CODE TRUE)

add_subdirectory(emptyStatic2)
add_subdirectory(shared1)
add_subdirectory(static3)
add_subdirectory(static4data)
add_subdirectory(static5)
add_subdirectory(app)

enable_testing()
add_test(NAME runApp COMMAND $<TARGET_FILE:app>)
