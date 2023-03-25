/**
 * @file info_data.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "info/info_data.h"

iotto_err_t info_data_from_json(IOTTO_JSON_PARAMETERS(info_data_t), info_type_t type)
{
    switch (type)
    {
    case INFO_HARDWARE:
        return hardware_info_from_json(json, &ptr->hardware);
    case INFO_SOFTWARE:
        return software_info_from_json(json, &ptr->software);
    case INFO_WIFI:
        return wifi_info_from_json(json, &ptr->wifi);
    case INFO_ETHERNET:
        return tcp_info_from_json(json, &ptr->ethernet);
    case INFO_NETWORK:
        return network_info_from_json(json, &ptr->network);
    default:
        return IOTTO_ERR_INVALID_TYPE;
    }
}

iotto_err_t info_data_to_json(IOTTO_JSON_PARAMETERS(info_data_t), info_type_t type)
{
    switch (type)
    {
    case INFO_HARDWARE:
        return hardware_info_to_json(json, &ptr->hardware);
    case INFO_SOFTWARE:
        return software_info_to_json(json, &ptr->software);
    case INFO_WIFI:
        return wifi_info_to_json(json, &ptr->wifi);
    case INFO_ETHERNET:
        return tcp_info_to_json(json, &ptr->ethernet);
    case INFO_NETWORK:
        return network_info_to_json(json, &ptr->network);
    default:
        return IOTTO_ERR_INVALID_TYPE;
    }
}

