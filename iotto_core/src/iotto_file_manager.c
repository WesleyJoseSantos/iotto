/**
 * @file iotto_file_manager.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "iotto_config.h"

#if defined(__linux__) || defined(__WINDOWS__) || defined(__IDF__)

#include "iotto_file_manager.h"
#include <stdio.h>
#include <string.h>

iotto_err_t iotto_file_save(void *data, size_t size, const char *filename)
{
    FILE *file = fopen(filename, "wb");
    if (file != NULL) {
        fwrite(data, size, 1, file);
        fclose(file);
        return IOTTO_OK;
    } else {
       return IOTTO_ERR_WRITE_OPERATION_FAIL;
    }
}

iotto_err_t iotto_file_load(void *data, size_t size, const char *filename)
{
    FILE *file = fopen(filename, "rb");
    if (file != NULL) {
        long file_size = 0;

        fseek(file, 0, SEEK_END);
        file_size = ftell(file);
        fseek(file, 0, SEEK_SET);

        if (file_size == (long)size) {
            memset(data, 0, size);
            fread(data, size, 1, file);
            fclose(file);
            return IOTTO_OK;
        } else {
            fclose(file);
            return IOTTO_ERR_INVALID_SIZE;
        }
    } else {
        return IOTTO_ERR_NOT_FOUND;
    }
}

#endif