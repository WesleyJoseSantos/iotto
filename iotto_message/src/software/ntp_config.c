/**
 * @file ntp_config.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "software/ntp_config.h"

iotto_err_t ntp_config_from_json(IOTTO_JSON_PARAMETERS(ntp_config_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_FROM_JSON_NUMBER(op_mode);
    IOTTO_FROM_JSON_NUMBER(sync_interval);
    IOTTO_FROM_JSON_NUMBER(sync_mode);
    IOTTO_FROM_JSON_CHAR_ARRAY(server1);
    IOTTO_FROM_JSON_CHAR_ARRAY(server2);
    IOTTO_FROM_JSON_CHAR_ARRAY(server3);
    return IOTTO_OK;
}

iotto_err_t ntp_config_to_json(IOTTO_JSON_PARAMETERS(ntp_config_t))
{
    IOTTO_JSON_CHECK_PARAMETERS();
    IOTTO_TO_JSON_NUMBER(op_mode);
    IOTTO_TO_JSON_NUMBER(sync_interval);
    IOTTO_TO_JSON_NUMBER(sync_mode);
    IOTTO_TO_JSON_CHAR_ARRAY(server1);
    IOTTO_TO_JSON_CHAR_ARRAY(server2);
    IOTTO_TO_JSON_CHAR_ARRAY(server3);
    return IOTTO_OK;
}

