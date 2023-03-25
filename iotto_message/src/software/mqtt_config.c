/**
 * @file mqtt_config.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "software/mqtt_config.h"

iotto_err_t mqtt_config_from_json(IOTTO_JSON_PARAMETERS(mqtt_config_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_FROM_JSON_CHAR_ARRAY(host);
    IOTTO_FROM_JSON_NUMBER(port);
    IOTTO_FROM_JSON_CHAR_ARRAY(username);
    IOTTO_FROM_JSON_CHAR_ARRAY(password);
    IOTTO_FROM_JSON_NUMBER(qos);
    IOTTO_FROM_JSON_CHAR_ARRAY(rx_topic);
    IOTTO_FROM_JSON_CHAR_ARRAY(tx_topic);
    return IOTTO_OK;
}

iotto_err_t mqtt_config_to_json(IOTTO_JSON_PARAMETERS(mqtt_config_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_TO_JSON_CHAR_ARRAY(host);
    IOTTO_TO_JSON_NUMBER(port);
    IOTTO_TO_JSON_CHAR_ARRAY(username);
    IOTTO_TO_JSON_CHAR_ARRAY(password);
    IOTTO_TO_JSON_NUMBER(qos);
    IOTTO_TO_JSON_CHAR_ARRAY(rx_topic);
    IOTTO_TO_JSON_CHAR_ARRAY(tx_topic);
    return IOTTO_OK;
}
