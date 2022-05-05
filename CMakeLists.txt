cmake_minimum_required(VERSION 3.10)
set(SRC_DIR "./src/")

project(editor VERSION 0.0.1)

file(GLOB files "${SRC_DIR}/*.c")
add_executable(editor ${files})

include_directories(${SRC_DIR})

target_link_libraries(editor -lncurses)
