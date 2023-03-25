/**
 * @file iotto_request.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "iotto_request.h"

iotto_err_t request_message_from_json(IOTTO_JSON_PARAMETERS(request_message_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_FROM_JSON_NUMBER(id);
    IOTTO_FROM_JSON_NUMBER(type);
    return IOTTO_OK;
}

iotto_err_t request_message_to_json(IOTTO_JSON_PARAMETERS(request_message_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_TO_JSON_NUMBER(id);
    IOTTO_TO_JSON_NUMBER(type);
    return IOTTO_OK;
}
