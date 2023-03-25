/**
 * @file hardware_message.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "hardware/hardware_message.h"

iotto_err_t hardware_message_from_json(IOTTO_JSON_PARAMETERS(hardware_message_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_FROM_JSON_BOOLEAN(enabled);
    IOTTO_FROM_JSON_NUMBER(type);
    IOTTO_FROM_JSON_UNION(config, hardware_config_from_json, ptr->type);
    return IOTTO_OK;
}

iotto_err_t hardware_message_to_json(IOTTO_JSON_PARAMETERS(hardware_message_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_TO_JSON_BOOLEAN(enabled);
    IOTTO_TO_JSON_NUMBER(type);
    IOTTO_TO_JSON_UNION(config, hardware_config_to_json, ptr->type);
    return IOTTO_OK;
}