/**
 * @file software_info.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __SOFTWARE_INFO__H__
#define __SOFTWARE_INFO__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include <inttypes.h>
#include "iotto_json.h"
#include "iotto_err.h"

typedef enum
{
    OS_TYPE_UNKNOWN,
    OS_TYPE_BAREMETAL,
    OS_TYPE_FREERTOS,
    OS_TYPE_WINDOWS,
} os_type_t;

typedef struct
{
    os_type_t os;
    uint8_t version[4];
} software_info_t;

iotto_err_t software_info_from_json(IOTTO_JSON_PARAMETERS(software_info_t));
iotto_err_t software_info_to_json(IOTTO_JSON_PARAMETERS(software_info_t));

#ifdef __cplusplus
}
#endif

#endif  //!__SOFTWARE_INFO__H__