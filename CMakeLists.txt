cmake_minimum_required(VERSION 3.30)
project(BackJoon)

set(CMAKE_CXX_STANDARD 17)

# Find all .cpp files in the current directory
file(GLOB SOURCE_FILES "*.cpp")

# Iterate over each source file and create an executable for each
foreach(source_file ${SOURCE_FILES})
    # Get the filename without the extension
    get_filename_component(executable_name ${source_file} NAME_WE)

    # Remove spaces and special characters from the executable name
    string(REGEX REPLACE "[^a-zA-Z0-9]" "_" executable_name ${executable_name})

    # Add executable for the current source file
    add_executable(${executable_name} ${source_file})

    # Optionally set properties for the executable, such as C++ standard
    set_target_properties(${executable_name} PROPERTIES
            CXX_STANDARD ${CMAKE_CXX_STANDARD}
            CXX_STANDARD_REQUIRED YES
            CXX_EXTENSIONS NO)
endforeach()