/**
 * @file ntp_config.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __NTP_CONFIG__H__
#define __NTP_CONFIG__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include <inttypes.h>
#include "iotto_json.h"
#include "iotto_err.h"

typedef struct
{
    uint8_t op_mode;
    uint32_t sync_interval;
    uint8_t sync_mode;
    char server1[64];
    char server2[64];
    char server3[64];
} ntp_config_t;

iotto_err_t ntp_config_from_json(IOTTO_JSON_PARAMETERS(ntp_config_t));
iotto_err_t ntp_config_to_json(IOTTO_JSON_PARAMETERS(ntp_config_t));

#ifdef __cplusplus
}
#endif

#endif  //!__NTP_CONFIG__H__