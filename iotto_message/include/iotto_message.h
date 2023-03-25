/**
 * @file iotto_message.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __IOTTO_MESSAGE__H__
#define __IOTTO_MESSAGE__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "iotto_message_data.h"

typedef struct
{
    message_id_t id;
    message_data_t data;
} message_t;

iotto_err_t message_from_json(IOTTO_JSON_PARAMETERS(message_t));
iotto_err_t message_to_json(IOTTO_JSON_PARAMETERS(message_t));

#ifdef __cplusplus
}
#endif

#endif  //!__IOTTO_MESSAGE__H__