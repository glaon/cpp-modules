cmake_minimum_required(VERSION 3.28) # Needed for C++20 modules support
project(cppmodules LANGUAGES CXX)

# Enable C++20 and modules support
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Configure LLVM/Clang as the compiler since it has better modules support
set(CMAKE_CXX_COMPILER clang++)

# Create the module library
add_library(math_module)
target_sources(math_module
    PUBLIC
        FILE_SET CXX_MODULES FILES
        src/math.ixx
        src/factory.ixx
)

# Create the executable
add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE math_module)