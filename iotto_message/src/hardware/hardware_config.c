/**
 * @file hardware_config.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "hardware/hardware_config.h"

iotto_err_t hardware_config_from_json(IOTTO_JSON_PARAMETERS(hardware_config_t), hardware_interface_t type)
{
    IOTTO_JSON_CHECK_PARAMETERS();
    switch (type)
    {
    case HARDWARE_INTERFACE_WIFI:
        return wifi_config_from_json(json, &ptr->wifi);
    case HARDWARE_INTERFACE_ETHERNET:
        return tcp_config_from_json(json, &ptr->ethernet);
    default:
        return IOTTO_ERR_INVALID_TYPE;
    }
}

iotto_err_t hardware_config_to_json(IOTTO_JSON_PARAMETERS(hardware_config_t), hardware_interface_t type)
{
    IOTTO_JSON_CHECK_PARAMETERS();
    switch (type)
    {
    case HARDWARE_INTERFACE_WIFI:
        return wifi_config_to_json(json, &ptr->wifi);
    case HARDWARE_INTERFACE_ETHERNET:
        return tcp_config_to_json(json, &ptr->ethernet);
    default:
        return IOTTO_ERR_INVALID_TYPE;
    }
}
