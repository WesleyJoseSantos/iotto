/**
 * @file iotto_err.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __IOTTO_ERR__H__
#define __IOTTO_ERR__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "iotto_config.h"

typedef enum
{
    IOTTO_FAIL = -0x1,
    IOTTO_OK = 0x0,
    IOTTO_ERR_BASE = IOTTO_CONFIG_ERR_BASE,
    IOTTO_ERR_NOT_IMPLEMENTED,
    IOTTO_ERR_INVALID_ARG,
    IOTTO_ERR_WRITE_OPERATION_FAIL,
    IOTTO_ERR_READ_OPERATION_FAIL,
    IOTTO_ERR_NOT_FOUND,
    IOTTO_ERR_INVALID_SIZE,
    IOTTO_ERR_INVALID_TYPE
} iotto_err_t;

#ifdef __cplusplus
}
#endif

#endif  //!__IOTTO_ERR__H__