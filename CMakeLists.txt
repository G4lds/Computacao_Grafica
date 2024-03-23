cmake_minimum_required(VERSION 3.5)
project(projeto_opengl_computacao_grafica_reury)
cmake_policy(SET CMP0072 NEW)

find_package(OpenGL REQUIRED)

add_executable(projeto_opengl src/main.cpp src/glad.h src/glad.c)

target_link_libraries(projeto_opengl glfw OpenGL::GL)