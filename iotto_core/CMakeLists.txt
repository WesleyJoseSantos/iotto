cmake_minimum_required(VERSION 3.10)

project(iotto_core C)

include_directories(include)
include_directories(../cJSON)

add_library(${PROJECT_NAME}
    src/iotto_file_manager.c
)