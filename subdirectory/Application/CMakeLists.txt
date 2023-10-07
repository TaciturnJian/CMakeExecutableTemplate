cmake_minimum_required(VERSION 3.8)

project("Application")

aux_source_directory("${PROJECT_SOURCE_DIR}/src" sc_program_source)
add_library(${PROJECT_NAME} ${sc_program_source})
target_include_directories(${PROJECT_NAME} BEFORE 
	PUBLIC "${PROJECT_SOURCE_DIR}/include"
)
