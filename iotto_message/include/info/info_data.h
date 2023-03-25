/**
 * @file info_data.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __INFO_DATA__H__
#define __INFO_DATA__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "hardware_info.h"
#include "software_info.h"
#include "tcp_info.h"
#include "wifi_info.h"
#include "network_info.h"
#include "iotto_json.h"
#include "iotto_err.h"

typedef enum 
{
    INFO_HARDWARE,
    INFO_SOFTWARE,
    INFO_WIFI,
    INFO_ETHERNET,
    INFO_NETWORK
} info_type_t;

typedef union
{
    hardware_info_t hardware;
    software_info_t software;
    wifi_info_t wifi;
    tcp_info_t ethernet;
    network_info_t network;
} info_data_t;

iotto_err_t info_data_from_json(IOTTO_JSON_PARAMETERS(info_data_t), info_type_t type);
iotto_err_t info_data_to_json(IOTTO_JSON_PARAMETERS(info_data_t), info_type_t type);

#ifdef __cplusplus
}
#endif

#endif  //!__INFO_DATA__H__