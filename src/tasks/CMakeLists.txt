add_library(underwater_tasks STATIC
    Task.cpp
)

target_include_directories(underwater_tasks PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)
