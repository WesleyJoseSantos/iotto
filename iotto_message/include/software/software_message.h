/**
 * @file software_message.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __SOFTWARE_MESSAGE__H__
#define __SOFTWARE_MESSAGE__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include "software_config.h"
#include "iotto_json.h"
#include "iotto_err.h"

typedef struct
{
    bool enabled;
    software_interface_t type;
    software_config_t config;
} software_message_t;

iotto_err_t software_message_from_json(IOTTO_JSON_PARAMETERS(software_message_t));
iotto_err_t software_message_to_json(IOTTO_JSON_PARAMETERS(software_message_t));

#ifdef __cplusplus
}
#endif

#endif  //!__SOFTWARE_MESSAGE__H__