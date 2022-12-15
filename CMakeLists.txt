cmake_minimum_required(VERSION 3.22.2)

project(MAIN VERSION 3.19.7 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_compile_options(-Wall -ggdb)
#add_compile_options(-Wall -Ofast)

set(HDR headers)
set(SRC sources)

include_directories(${HDR})

set(EXCP ${HDR}/exception.hpp ${SRC}/exception.cpp)

add_library(_excp STATIC ${EXCP})

add_executable(launcher ./main.cpp)

target_link_libraries(launcher PRIVATE _excp)
