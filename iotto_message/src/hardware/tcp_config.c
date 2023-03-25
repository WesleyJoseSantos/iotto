/**
 * @file tcp_config.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "hardware/tcp_config.h"

iotto_err_t tcp_config_from_json(IOTTO_JSON_PARAMETERS(tcp_config_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_FROM_JSON_NUMBER(dhcp);
    IOTTO_FROM_JSON_NUMBER_ARRAY(ip);
    IOTTO_FROM_JSON_NUMBER_ARRAY(mask);
    IOTTO_FROM_JSON_NUMBER_ARRAY(gateway);
    IOTTO_FROM_JSON_NUMBER_ARRAY(dns);
    return IOTTO_OK;
}

iotto_err_t tcp_config_to_json(IOTTO_JSON_PARAMETERS(tcp_config_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_TO_JSON_NUMBER(dhcp);
    IOTTO_TO_JSON_NUMBER_ARRAY(ip);
    IOTTO_TO_JSON_NUMBER_ARRAY(mask);
    IOTTO_TO_JSON_NUMBER_ARRAY(gateway);
    IOTTO_TO_JSON_NUMBER_ARRAY(dns);
    return IOTTO_OK;
}