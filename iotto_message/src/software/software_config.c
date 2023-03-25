/**
 * @file software_config.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "software/software_config.h"

iotto_err_t software_config_from_json(IOTTO_JSON_PARAMETERS(software_config_t), software_interface_t type)
{
    IOTTO_JSON_CHECK_PARAMETERS();
    switch (type)
    {
    case SOFTWARE_MQTT:
        return mqtt_config_from_json(json, &ptr->mqtt);
    case SOFTWARE_NTP:
        return ntp_config_from_json(json, &ptr->ntp);    
    default:
        break;
    }
}

iotto_err_t software_config_to_json(IOTTO_JSON_PARAMETERS(software_config_t), software_interface_t type)
{
    IOTTO_JSON_CHECK_PARAMETERS();
    switch (type)
    {
    case SOFTWARE_MQTT:
        return mqtt_config_to_json(json, &ptr->mqtt);
    case SOFTWARE_NTP:
        return ntp_config_to_json(json, &ptr->ntp);    
    default:
        break;
    }
}


