/**
 * @file tcp_info.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "info/tcp_info.h"

iotto_err_t tcp_info_from_json(IOTTO_JSON_PARAMETERS(tcp_info_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_FROM_JSON_NUMBER_ARRAY(ip);
    IOTTO_FROM_JSON_BOOLEAN(connected);
    return IOTTO_OK;
}

iotto_err_t tcp_info_to_json(IOTTO_JSON_PARAMETERS(tcp_info_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_TO_JSON_NUMBER_ARRAY(ip);
    IOTTO_TO_JSON_BOOLEAN(connected);
    return IOTTO_OK;
}
