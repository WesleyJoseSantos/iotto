/**
 * @file iotto_response.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "iotto_response.h"

iotto_err_t response_message_from_json(IOTTO_JSON_PARAMETERS(response_message_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_FROM_JSON_NUMBER(err);
    IOTTO_FROM_JSON_CHAR_ARRAY(message);
    return IOTTO_OK;
}

iotto_err_t response_message_to_json(IOTTO_JSON_PARAMETERS(response_message_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_FROM_JSON_NUMBER(err);
    IOTTO_FROM_JSON_CHAR_ARRAY(message);
    return IOTTO_OK;
}
