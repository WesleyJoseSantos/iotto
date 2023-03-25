/**
 * @file hardware_info.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __HARDWARE_INFO__H__
#define __HARDWARE_INFO__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include <inttypes.h>
#include "iotto_json.h"
#include "iotto_err.h"

typedef struct
{
    char board[24];
    char mcu[24];
    uint8_t mac_wifi[6];
} hardware_info_t;

iotto_err_t hardware_info_from_json(IOTTO_JSON_PARAMETERS(hardware_info_t));
iotto_err_t hardware_info_to_json(IOTTO_JSON_PARAMETERS(hardware_info_t));

#ifdef __cplusplus
}
#endif

#endif  //!__HARDWARE_INFO__H__