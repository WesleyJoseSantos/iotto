/**
 * @file iotto_config.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __IOTTO_CONFIG__H__
#define __IOTTO_CONFIG__H__

#if !defined(__WINDOWS__) && (defined(WIN32) || defined(WIN64) || defined(_MSC_VER) || defined(_WIN32))
#define __WINDOWS__
#endif

#if !defined(__LINUX__) && defined __linux__
#define __LINUX__
#endif

#if !defined(__ARDUINO__) && (defined(__AVR__) || defined(ESP8266))
#define __ARDUINO__
#endif

#if !defined(__IDF__) && defined(IDF_VER)
#define __IDF__
#endif

#if !defined(__WINDOWS__) && !defined(__LINUX__) && !defined(__ARDUINO__) && !defined(__IDF__)
#error "System not supported!"
#endif

#define IOTTO_CONFIG_ERR_BASE 0x100

#endif  //!__IOTTO_CONFIG__H__