
cmake_minimum_required(VERSION 3.20)

project(cpp_refresh_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(project_warnings INTERFACE)

target_compile_options(project_warnings INTERFACE
	-Wall
	-Wextra
	-Wpedantic
	-Wconversion
	-Wsign-conversion
	-Wshadow
)

add_executable(chapter01 
	01-basics/main.cpp
	01-basics/exercise-01.cpp
	01-basics/exercise-01.h
	01-basics/exercise-02.cpp
	01-basics/exercise-02.h
	01-basics/exercise-03.cpp
	01-basics/exercise-03.h
)

target_link_libraries(chapter01 PRIVATE project_warnings)
