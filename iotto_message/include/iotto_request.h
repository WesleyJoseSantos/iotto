/**
 * @file iotto_request.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __IOTTO_REQUEST__H__
#define __IOTTO_REQUEST__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include <inttypes.h>
#include "iotto_json.h"
#include "iotto_err.h"

typedef struct iotto_request
{
    uint16_t id;
    uint16_t type;
} request_message_t;

iotto_err_t request_message_from_json(IOTTO_JSON_PARAMETERS(request_message_t));
iotto_err_t request_message_to_json(IOTTO_JSON_PARAMETERS(request_message_t));

#ifdef __cplusplus
}
#endif

#endif  //!__IOTTO_REQUEST__H__