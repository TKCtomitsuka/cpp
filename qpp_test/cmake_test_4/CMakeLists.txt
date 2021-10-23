cmake_minimum_required(VERSION 3.12)
project(bb84_app)
set(CMAKE_CXX_STANDARD 17)

# Disable spurious Eigen warnings with MSVC (warning STL4007)
if (MSVC)
    add_compile_definitions(_SILENCE_CXX17_ADAPTOR_TYPEDEFS_DEPRECATION_WARNING)
endif ()

# The line below is optional (uncomment if Quantum++ was installed in a
# non-standard location)

#set(CMAKE_PREFIX_PATH "/usr/local/include/qpp")

find_package(qpp REQUIRED)
add_executable(bb84_app bb84.cpp)
target_include_directories(libqpp INTERFACE "/usr/local/include/qpp")
target_link_libraries(bb84_app ${QPP_LINK_DEPS} libqpp)
