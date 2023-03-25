/**
 * @file iotto_message_data.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __IOTTO_MESSAGE_DATA__H__
#define __IOTTO_MESSAGE_DATA__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "hardware/hardware_message.h"
#include "software/software_message.h"
#include "iotto_request.h"
#include "info/info_message.h"
#include "iotto_response.h"

typedef enum
{
    MSG_ID_INVALID,
    MSG_ID_HARDWARE,
    MSG_ID_SOFTWARE,
    MSG_ID_REQUEST,
    MSG_ID_INFO,
    MSG_ID_RESPONSE
} message_id_t;

typedef union
{
    hardware_message_t hardware;
    software_message_t software;
    request_message_t request;
    info_message_t info;
    response_message_t response;
} message_data_t;

iotto_err_t message_data_from_json(IOTTO_JSON_PARAMETERS(message_data_t), message_id_t type);
iotto_err_t message_data_to_json(IOTTO_JSON_PARAMETERS(message_data_t), message_id_t type);

#ifdef __cplusplus
}
#endif

#endif  //!__IOTTO_MESSAGE_DATA__H__