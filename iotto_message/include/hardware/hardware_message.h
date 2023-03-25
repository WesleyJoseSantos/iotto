/**
 * @file hardware_message.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __HARDWARE_MESSAGE__H__
#define __HARDWARE_MESSAGE__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include "hardware_config.h"
#include "iotto_json.h"
#include "iotto_err.h"

typedef struct
{
    bool enabled;
    hardware_interface_t type;
    hardware_config_t config;
} hardware_message_t;

iotto_err_t hardware_message_from_json(IOTTO_JSON_PARAMETERS(hardware_message_t));
iotto_err_t hardware_message_to_json(IOTTO_JSON_PARAMETERS(hardware_message_t));

#ifdef __cplusplus
}
#endif

#endif  //!__HARDWARE_MESSAGE__H__