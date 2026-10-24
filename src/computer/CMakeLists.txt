add_library(underwater_computer STATIC
    Computer.cpp
)

target_include_directories(underwater_computer PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(underwater_computer PUBLIC
    underwater_tasks
    underwater_problems
)