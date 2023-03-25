/**
 * @file network_info.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __NETWORK_INFO__H__
#define __NETWORK_INFO__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include "tcp_info.h"
#include "wifi_info.h"
#include "iotto_json.h"
#include "iotto_err.h"

typedef struct
{
    wifi_info_t wifi;
    tcp_info_t ethernet;
    bool ntp;
    bool mqtt;
} network_info_t;

iotto_err_t network_info_from_json(IOTTO_JSON_PARAMETERS(network_info_t));
iotto_err_t network_info_to_json(IOTTO_JSON_PARAMETERS(network_info_t));

#ifdef __cplusplus
}
#endif

#endif  //!__NETWORK_INFO__H__