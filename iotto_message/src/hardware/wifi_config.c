/**
 * @file wifi_config.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "hardware/wifi_config.h"

iotto_err_t wifi_config_from_json(IOTTO_JSON_PARAMETERS(wifi_config_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_FROM_JSON_CHAR_ARRAY(ssid);
    IOTTO_FROM_JSON_CHAR_ARRAY(password);
    IOTTO_FROM_JSON_OBJ(tcp, tcp_config_to_json);
    return IOTTO_OK;
}

iotto_err_t wifi_config_to_json(IOTTO_JSON_PARAMETERS(wifi_config_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_TO_JSON_CHAR_ARRAY(ssid);
    IOTTO_TO_JSON_CHAR_ARRAY(password);
    IOTTO_TO_JSON_OBJ(tcp, tcp_config_to_json);
    return IOTTO_OK;
}