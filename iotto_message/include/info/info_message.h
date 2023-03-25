/**
 * @file info_message.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __INFO_MESSAGE__H__
#define __INFO_MESSAGE__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "info_data.h"
#include "iotto_json.h"
#include "iotto_err.h"

typedef struct info_message
{
    info_type_t type;
    info_data_t info;
} info_message_t;

iotto_err_t info_message_from_json(IOTTO_JSON_PARAMETERS(info_message_t));
iotto_err_t info_message_to_json(IOTTO_JSON_PARAMETERS(info_message_t));

#ifdef __cplusplus
}
#endif

#endif  //!__INFO_MESSAGE__H__