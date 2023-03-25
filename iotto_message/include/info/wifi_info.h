/**
 * @file wifi_info.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __WIFI_INFO__H__
#define __WIFI_INFO__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "tcp_info.h"
#include "iotto_json.h"
#include "iotto_err.h"

typedef struct
{
    tcp_info_t tcp;
    char ssid[32];
    int8_t rssi;
} wifi_info_t;

iotto_err_t wifi_info_from_json(IOTTO_JSON_PARAMETERS(wifi_info_t));
iotto_err_t wifi_info_to_json(IOTTO_JSON_PARAMETERS(wifi_info_t));

#ifdef __cplusplus
}
#endif

#endif  //!__WIFI_INFO__H__