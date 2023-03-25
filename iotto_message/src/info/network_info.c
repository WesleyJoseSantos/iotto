/**
 * @file network_info.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "info/network_info.h"

iotto_err_t network_info_from_json(IOTTO_JSON_PARAMETERS(network_info_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_FROM_JSON_OBJ(wifi, wifi_info_from_json);
    IOTTO_FROM_JSON_OBJ(ethernet, tcp_info_from_json);
    IOTTO_FROM_JSON_BOOLEAN(ntp);
    IOTTO_FROM_JSON_BOOLEAN(mqtt);
    return IOTTO_OK;
}

iotto_err_t network_info_to_json(IOTTO_JSON_PARAMETERS(network_info_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_TO_JSON_OBJ(wifi, wifi_info_to_json);
    IOTTO_TO_JSON_OBJ(ethernet, tcp_info_to_json);
    IOTTO_TO_JSON_BOOLEAN(ntp);
    IOTTO_TO_JSON_BOOLEAN(mqtt);
    return IOTTO_OK;
}

