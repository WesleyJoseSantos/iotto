/**
 * @file mqtt_config.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __MQTT_CONFIG__H__
#define __MQTT_CONFIG__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include <inttypes.h>
#include "iotto_json.h"
#include "iotto_err.h"

typedef struct
{
    char host[128];
    int port;
    char username[64];
    char password[64];
    uint8_t qos;
    char rx_topic[48];
    char tx_topic[48];
} mqtt_config_t;

iotto_err_t mqtt_config_from_json(IOTTO_JSON_PARAMETERS(mqtt_config_t));
iotto_err_t mqtt_config_to_json(IOTTO_JSON_PARAMETERS(mqtt_config_t));

#ifdef __cplusplus
}
#endif

#endif  //!__MQTT_CONFIG__H__