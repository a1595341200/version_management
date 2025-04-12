cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME version)

project(${PROJECT_NAME} VERSION 1.0.0 LANGUAGES CXX)
include_directories(version)
set(CMAKE_CXX_STANDARD 17)

# 查找src下的所有源文件
file(GLOB_RECURSE SRC_FILES "src/*.cpp")

# 执行version脚本，并添加错误处理
execute_process(
    COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/version.sh
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/version
    OUTPUT_VARIABLE VERSION_INFO
    ERROR_VARIABLE ERROR_INFO
    RESULT_VARIABLE RESULT
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

if(NOT RESULT EQUAL 0)
    message(FATAL_ERROR "Failed to execute version.sh: ${ERROR_INFO}")
endif()

add_executable(${PROJECT_NAME} ${SRC_FILES})
