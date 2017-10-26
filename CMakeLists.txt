cmake_minimum_required(VERSION 3.0)

project (comp_gen)

set(CMAKE_CXX_STANDARD 14)

find_package(Boost COMPONENTS system filesystem regex REQUIRED)

file(GLOB sources "source/*.cpp" "source/generators/*.cpp" "source/configs/*.cpp"
    "source/util/*.cpp" "midifile/src-library/*.cpp" csvparser/CSVparser.cpp)

add_executable(${PROJECT_NAME} ${sources})

target_include_directories(${PROJECT_NAME} PUBLIC
    include
    include/generators
    include/configs
    include/util
    csvparser
    midifile/include)

target_link_libraries(${PROJECT_NAME}
    ${Boost_SYSTEM_LIBRARY}
    ${Boost_FILESYSTEM_LIBRARY}
    ${Boost_REGEX_LIBRARY})
