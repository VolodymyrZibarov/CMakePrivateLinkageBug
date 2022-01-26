project(static3)

add_library(${PROJECT_NAME} STATIC
    static3.h
    static3.cpp
    )

target_link_libraries(${PROJECT_NAME} PUBLIC
    static4data
    static5
    )

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    )
