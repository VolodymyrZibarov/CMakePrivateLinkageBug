project(app)

add_executable(${PROJECT_NAME}
    main.cpp
    )

target_link_libraries(${PROJECT_NAME} PRIVATE
    emptyStatic1
    emptyStatic2
    )
