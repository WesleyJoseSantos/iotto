/**
 * @file hardware_config.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __HARDWARE_CONFIG__H__
#define __HARDWARE_CONFIG__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "tcp_config.h"
#include "wifi_config.h"
#include "iotto_json.h"
#include "iotto_err.h"

typedef enum
{
    HARDWARE_INTERFACE_WIFI,
    HARDWARE_INTERFACE_ETHERNET
} hardware_interface_t;

typedef union
{
    wifi_config_t wifi;
    tcp_config_t ethernet;
} hardware_config_t;

iotto_err_t hardware_config_from_json(IOTTO_JSON_PARAMETERS(hardware_config_t), hardware_interface_t type);
iotto_err_t hardware_config_to_json(IOTTO_JSON_PARAMETERS(hardware_config_t), hardware_interface_t type);

#ifdef __cplusplus
}
#endif

#endif  //!__HARDWARE_CONFIG__H__