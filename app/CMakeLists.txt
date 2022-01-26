project(app)

add_executable(${PROJECT_NAME}
    main.cpp
    )

target_link_libraries(${PROJECT_NAME} PRIVATE
    static3
    emptyStatic2
    )
