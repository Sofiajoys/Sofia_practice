cmake_minimum_required(VERSION 3.10)
project(calc C)
set(CMAKE_C_STANDARD 11)
set(SOURCES
	src/add.c
	src/sub.c
	src/mul.c
	src/div.c
	src/prime.c
	src/even.c
	src/odd.c
	src/fibonacci.c
	)
set(TEST
	test/calculator.c
	)
add_executable(calculator ${SOURCES} ${INCLUDE} ${TEST})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
