/**
 * @file hardware_info.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "info/hardware_info.h"

iotto_err_t hardware_info_from_json(IOTTO_JSON_PARAMETERS(hardware_info_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_FROM_JSON_CHAR_ARRAY(board);
    IOTTO_FROM_JSON_CHAR_ARRAY(mcu);
    IOTTO_FROM_JSON_NUMBER_ARRAY(mac_wifi);
    return IOTTO_OK;
}

iotto_err_t hardware_info_to_json(IOTTO_JSON_PARAMETERS(hardware_info_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_TO_JSON_CHAR_ARRAY(board);
    IOTTO_TO_JSON_CHAR_ARRAY(mcu);
    IOTTO_TO_JSON_NUMBER_ARRAY(mac_wifi);
    return IOTTO_OK;
}

