add_library(underwater_problems STATIC
    Problem.cpp
)

target_include_directories(underwater_problems PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)