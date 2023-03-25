/**
 * @file iotto_file_manager.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __IOTTO_FILE_MANAGER__H__
#define __IOTTO_FILE_MANAGER__H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "iotto_err.h"
#include <stddef.h>

iotto_err_t iotto_file_save(void *data, size_t size, const char *filename);
iotto_err_t iotto_file_load(void *data, size_t size, const char *filename);

#ifdef __cplusplus
}
#endif

#endif  //!__IOTTO_FILE_MANAGER__H__