/**
 * @file software_config.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __SOFTWARE_CONFIG__H__
#define __SOFTWARE_CONFIG__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "mqtt_config.h"
#include "ntp_config.h"
#include "iotto_json.h"
#include "iotto_err.h"

typedef enum
{
    SOFTWARE_MQTT,
    SOFTWARE_NTP,
} software_interface_t;

typedef union
{
    mqtt_config_t mqtt;
    ntp_config_t ntp;
} software_config_t;

iotto_err_t software_config_from_json(IOTTO_JSON_PARAMETERS(software_config_t), software_interface_t type);
iotto_err_t software_config_to_json(IOTTO_JSON_PARAMETERS(software_config_t), software_interface_t type);

#ifdef __cplusplus
}
#endif

#endif  //!__SOFTWARE_CONFIG__H__