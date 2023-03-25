/**
 * @file iotto_json.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __IOTTO_JSON__H__
#define __IOTTO_JSON__H__

#include "cJSON.h"
#include <string.h>
#include <stdlib.h>

#include "iotto_err.h"

#define IOTTO_JSON_PARAMETERS(type_t) cJSON *json, type_t *ptr

#define IOTTO_JSON_CREATE_INTEGER(x)              \
    cJSON j_##x * = cJSON_GetObjectItem(json, #x); \
    if (j_##x && j_##x->type == cJSON_Number)      \
    int x = j_##x->valueint

#define IOTTO_JSON_CREATE_ENUM(x, type_t)        \
    cJSON *j_##x = cJSON_GetObjectItem(json, #x); \
    type_t x = 0;                                 \
    if (j_##x && j_##x->type == cJSON_Number)     \
    x = (type_t)j_##x->valueint

#define IOTTO_JSON_CHECK_PARAMETERS() \
    if (json == NULL || ptr == NULL)   \
        return IOTTO_ERR_INVALID_ARG;

#define IOTTO_FROM_JSON_BOOLEAN(x)           \
    cJSON *x = cJSON_GetObjectItem(json, #x); \
    if (x)                                    \
        ptr->x = x->type == cJSON_True;       \
    else                                      \
        ptr->x = false

#define IOTTO_FROM_JSON_NUMBER(x)            \
    cJSON *x = cJSON_GetObjectItem(json, #x); \
    if (x && x->type == cJSON_Number)         \
    ptr->x = x->valueint

#define IOTTO_FROM_JSON_NUMBER_ARRAY(x)                    \
    cJSON *x = cJSON_GetObjectItem(json, #x);               \
    for (size_t i = 0; i < sizeof(ptr->x); i++)             \
    {                                                       \
        if (i < cJSON_GetArraySize(x))                      \
        {                                                   \
            ptr->x[i] = cJSON_GetArrayItem(x, i)->valueint; \
        }                                                   \
    }

#define IOTTO_FROM_JSON_CHAR_ARRAY(x)                             \
    cJSON *x = cJSON_GetObjectItem(json, #x);                      \
    if (x && x->type == cJSON_String && x->valuestring[0] != '\0') \
    {                                                              \
        size_t len = strnlen(x->valuestring, sizeof(ptr->x));      \
        strncpy((char *)ptr->x, x->valuestring, len);              \
        ptr->x[len] = '\0';                                        \
    }

#define IOTTO_FROM_JSON_STRING(x)                                 \
    cJSON *x = cJSON_GetObjectItem(json, #x);                      \
    if (x && x->type == cJSON_String && x->valuestring[0] != '\0') \
    {                                                              \
        ptr->x = malloc(strlen(x->valuestring) + 1);               \
        strcpy((char *)ptr->x, x->valuestring);                    \
    }

#define IOTTO_TO_JSON_BOOLEAN(x) cJSON_AddBoolToObject(json, #x, ptr->x)

#define IOTTO_TO_JSON_NUMBER(x) cJSON_AddNumberToObject(json, #x, ptr->x)

#define asizeof(x) sizeof(x) / sizeof(x[0])

#define IOTTO_TO_JSON_NUMBER_ARRAY(x)                                  \
    {                                                                   \
        size_t count = 0;                                               \
        for (size_t i = 0; i < asizeof(ptr->x); i++)                    \
        {                                                               \
            if (ptr->x[i] != 0)                                         \
                break;                                                  \
            count++;                                                    \
        }                                                               \
        if (count != (asizeof(ptr->x)))                                 \
        {                                                               \
            cJSON *x = cJSON_CreateArray();                             \
            for (size_t i = 0; i < asizeof(ptr->x); i++)                \
            {                                                           \
                cJSON_AddItemToArray(x, cJSON_CreateNumber(ptr->x[i])); \
            }                                                           \
            cJSON_AddItemToObject(json, #x, x);                         \
        }                                                               \
    }

#define IOTTO_TO_JSON_CHAR_ARRAY(x)                            \
    if (ptr->x != NULL && strnlen(ptr->x, sizeof(ptr->x)) != 0) \
    cJSON_AddStringToObject(json, #x, (char *)ptr->x)

#define IOTTO_TO_JSON_HEX_ARRAY(x)               \
    char x[(sizeof(ptr->x) * 2) + 1];             \
    int len = 0;                                  \
    for (size_t i = 0; i < sizeof(ptr->x); i++)   \
    {                                             \
        len += sprintf(&x[len], "%X", ptr->x[i]); \
    }                                             \
    x[len] = '\0';                                \
    cJSON_AddStringToObject(json, #x, x);

#define IOTTO_FROM_JSON_OBJ(obj, handler) \
    handler(cJSON_GetObjectItem(json, #obj), &ptr->obj)

#define IOTTO_FROM_JSON_UNION(obj, handler, type) \
    handler(cJSON_GetObjectItem(json, #obj), &ptr->obj, type)

#define IOTTO_TO_JSON_OBJ(obj, handler)        \
    if (handler != NULL)                        \
    {                                           \
        cJSON *obj = cJSON_CreateObject();      \
        int err = handler(obj, &ptr->obj);      \
        if (err != IOTTO_OK)                   \
            return err;                         \
        cJSON_AddItemToObject(json, #obj, obj); \
    }                                           \
    else                                        \
    {                                           \
        return IOTTO_ERR_INVALID_ARG;          \
    }

#define IOTTO_TO_JSON_UNION(obj, handler, type) \
    if (handler != NULL)                         \
    {                                            \
        cJSON *obj = cJSON_CreateObject();       \
        int err = handler(obj, &ptr->obj, type); \
        if (err != IOTTO_OK)                    \
            return err;                          \
        cJSON_AddItemToObject(json, #obj, obj);  \
    }                                            \
    else                                         \
    {                                            \
        return IOTTO_ERR_INVALID_ARG;           \
    }

#endif  //!__IOTTO_JSON__H__