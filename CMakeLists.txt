cmake_minimum_required(VERSION 3.28) # Needed for C++20 modules support

cmake_policy(VERSION 3.28)

project(cppmodules LANGUAGES CXX)

# Enable C++20 and modules support
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_COMPILER /usr/bin/clang++)

include(FetchContent)
FetchContent_Declare(
  std
  URL "file://${CMAKE_SOURCE_DIR}/llvm-project/build/modules/c++/v1/"
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
  SYSTEM
)
FetchContent_MakeAvailable(std)

# Add standard library modules support
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fmodules -fbuiltin-module-map")

# Create the module library
add_library(math_module)
target_sources(math_module
    PUBLIC
        FILE_SET CXX_MODULES FILES
        src/math.ixx
        src/factory.ixx
)

add_executable(main)
add_dependencies(main std.compat)
target_link_libraries(main std.compat math_module)
target_sources(main
  PRIVATE
    src/main.cpp
)
