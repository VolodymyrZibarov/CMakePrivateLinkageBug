project(static4data)

add_library(${PROJECT_NAME} STATIC
    static4data.h
    static4data.cpp
    )

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    )
