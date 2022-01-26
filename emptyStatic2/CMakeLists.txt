project(emptyStatic2)

add_library(${PROJECT_NAME} STATIC
    empty.cpp
    )

target_link_libraries(${PROJECT_NAME} PUBLIC
    shared1
    )
