cmake_minimum_required(VERSION 3.10)
project(cmake2 C)
set(CMAKE_C_STANDARD 11)
add_executable(app tst/app.c src/add.c include/math.h)
	
