/**
 * @file software_info.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "info/software_info.h"

iotto_err_t software_info_from_json(IOTTO_JSON_PARAMETERS(software_info_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_FROM_JSON_NUMBER(os);
    IOTTO_FROM_JSON_NUMBER_ARRAY(version);
    return IOTTO_OK;
}

iotto_err_t software_info_to_json(IOTTO_JSON_PARAMETERS(software_info_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_TO_JSON_NUMBER(os);
    IOTTO_TO_JSON_NUMBER_ARRAY(version);
    return IOTTO_OK;
}

