/**
 * @file tcp_config.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __TCP_CONFIG__H__
#define __TCP_CONFIG__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include <inttypes.h>
#include "iotto_json.h"
#include "iotto_err.h"

typedef enum
{
    DHCP_DISABLED,
    DHCP_CLIENT,
    DHCP_SERVER,
} dhcp_status_t;

typedef struct
{
    dhcp_status_t dhcp;
    uint8_t ip[4];
    uint8_t mask[4];
    uint8_t gateway[4];
    uint8_t dns[4];
} tcp_config_t;

iotto_err_t tcp_config_from_json(IOTTO_JSON_PARAMETERS(tcp_config_t));
iotto_err_t tcp_config_to_json(IOTTO_JSON_PARAMETERS(tcp_config_t));

#ifdef __cplusplus
}
#endif

#endif  //!__TCP_CONFIG__H__