add_subdirectory(tasks)
add_subdirectory(computer)
add_subdirectory(problems)

add_library(underwater_core INTERFACE)

target_link_libraries(underwater_core INTERFACE
    underwater_computer
)

add_executable(abyss main.cpp)

target_link_libraries(abyss PRIVATE underwater_core)