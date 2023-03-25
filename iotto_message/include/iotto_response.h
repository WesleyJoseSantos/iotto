/**
 * @file iotto_response.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __IOTTO_RESPONSE__H__
#define __IOTTO_RESPONSE__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include <inttypes.h>
#include "iotto_json.h"
#include "iotto_err.h"

typedef struct
{
    uint32_t err;
    char message[256];
} response_message_t;

iotto_err_t response_message_from_json(IOTTO_JSON_PARAMETERS(response_message_t));
iotto_err_t response_message_to_json(IOTTO_JSON_PARAMETERS(response_message_t));

#ifdef __cplusplus
}
#endif

#endif  //!__IOTTO_RESPONSE__H__