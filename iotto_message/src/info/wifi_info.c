/**
 * @file wifi_info.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "info/wifi_info.h"

iotto_err_t wifi_info_from_json(IOTTO_JSON_PARAMETERS(wifi_info_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_FROM_JSON_OBJ(tcp, tcp_info_from_json);
    IOTTO_FROM_JSON_CHAR_ARRAY(ssid);
    IOTTO_FROM_JSON_NUMBER(rssi);
    return IOTTO_OK;
}

iotto_err_t wifi_info_to_json(IOTTO_JSON_PARAMETERS(wifi_info_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_TO_JSON_OBJ(tcp, tcp_info_to_json);
    IOTTO_TO_JSON_CHAR_ARRAY(ssid);
    IOTTO_TO_JSON_NUMBER(rssi);
    return IOTTO_OK;
}
