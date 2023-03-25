/**
 * @file tcp_info.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __TCP_INFO__H__
#define __TCP_INFO__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <inttypes.h>
#include "iotto_json.h"
#include "iotto_err.h"

typedef struct
{
    uint8_t ip[4];
    bool connected;
} tcp_info_t;

iotto_err_t tcp_info_from_json(IOTTO_JSON_PARAMETERS(tcp_info_t));
iotto_err_t tcp_info_to_json(IOTTO_JSON_PARAMETERS(tcp_info_t));

#ifdef __cplusplus
}
#endif

#endif  //!__TCP_INFO__H__