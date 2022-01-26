project(shared1)

add_library(${PROJECT_NAME} SHARED
    shared1.cpp
    )

target_link_libraries(${PROJECT_NAME} PRIVATE
    static3
    )

target_link_libraries(${PROJECT_NAME} PUBLIC
    static5
    )
