cmake_minimum_required(VERSION 3.8)

project("Program")

add_subdirectory("${PROJECT_SOURCE_DIR}/subdirectory/Application")

#find_package(<LibraryName>)

aux_source_directory("${PROJECT_SOURCE_DIR}/src" sc_program_source)
add_executable(${PROJECT_NAME} ${sc_program_source})
target_include_directories(${PROJECT_NAME} BEFORE 
	PRIVATE "${PROJECT_SOURCE_DIR}/include"
)

target_link_libraries(${PROJECT_NAME} 
	PRIVATE	"Application"
)
