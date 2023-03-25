/**
 * @file wifi_config.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __WIFI_CONFIG__H__
#define __WIFI_CONFIG__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "tcp_config.h"
#include "iotto_json.h"
#include "iotto_err.h"

typedef struct
{
    char ssid[32];
    char password[32];
    tcp_config_t tcp;
} wifi_config_t;

iotto_err_t wifi_config_from_json(IOTTO_JSON_PARAMETERS(wifi_config_t));
iotto_err_t wifi_config_to_json(IOTTO_JSON_PARAMETERS(wifi_config_t));

#ifdef __cplusplus
}
#endif

#endif  //!__WIFI_CONFIG__H__