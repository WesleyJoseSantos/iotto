cmake_minimum_required(VERSION 3.0.0)

project(iotto LANGUAGES C VERSION 0.1.0)

add_subdirectory(iotto_core)
add_subdirectory(iotto_message)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERION ${PROJECT_VERSION})
include(CPack)