cmake_minimum_required(VERSION 3.10)

project(iotto_message C)

include_directories(include)
include_directories(${CMAKE_SOURCE_DIR}/iotto_core/include)
include_directories(../cJSON)

add_library(${PROJECT_NAME}
    src/hardware/hardware_config.c
    src/hardware/hardware_message.c
    src/hardware/tcp_config.c
    src/hardware/wifi_config.c

    src/software/mqtt_config.c
    src/software/ntp_config.c
    src/software/software_config.c
    src/software/software_message.c

    src/info/hardware_info.c
    src/info/info_data.c
    src/info/info_message.c
    src/info/network_info.c
    src/info/software_info.c
    src/info/tcp_info.c
    src/info/wifi_info.c

    src/iotto_message_data.c
    src/iotto_message.c
    src/iotto_request.c
    src/iotto_response.c
)

target_link_libraries(${PROJECT_NAME} iotto_core)