/*
 * File: main.h
 * Date: 27.02.2014
 * Denis Zheleznyakov aka ZiB @ http://ziblog.ru
 */

#ifndef MAIN_H_
#define MAIN_H_

#define STM8L15X_MD
#define HSE_VALUE			((uint32_t)12000000) // МГц
#define assert_param(expr)	((void)0)

#include "stm8l15x.h"

#include "macros.h"

#include "mcu_gpio.h"
#include "mcu_usart.h"

#include "device.h"
#include "network.h"

#define PIN_IO_D0			A, 6, HIGH, OUTPUT_PUSH_PULL_NOSPEED_LIMIT
#define PIN_IO_D1			D, 0, HIGH, OUTPUT_PUSH_PULL_NOSPEED_LIMIT
#define PIN_IO_D2			D, 1, HIGH, OUTPUT_PUSH_PULL_NOSPEED_LIMIT
#define PIN_IO_D3			D, 2, HIGH, OUTPUT_PUSH_PULL_NOSPEED_LIMIT
#define PIN_IO_D4			D, 3, HIGH, OUTPUT_PUSH_PULL_NOSPEED_LIMIT
#define PIN_IO_D5			B, 0, HIGH, OUTPUT_PUSH_PULL_NOSPEED_LIMIT
#define PIN_IO_D6			B, 1, HIGH, OUTPUT_PUSH_PULL_NOSPEED_LIMIT
#define PIN_IO_D7			B, 2, HIGH, OUTPUT_PUSH_PULL_NOSPEED_LIMIT
#define PIN_IO_D8			B, 3, HIGH, OUTPUT_PUSH_PULL_NOSPEED_LIMIT
#define PIN_IO_D9			D, 4, HIGH, OUTPUT_PUSH_PULL_NOSPEED_LIMIT
#define PIN_IO_D10			B, 4, HIGH, OUTPUT_PUSH_PULL_NOSPEED_LIMIT
#define PIN_IO_D11			B, 6, HIGH, OUTPUT_PUSH_PULL_NOSPEED_LIMIT
#define PIN_IO_D12			B, 7, HIGH, OUTPUT_PUSH_PULL_NOSPEED_LIMIT
#define PIN_IO_D13			B, 5, HIGH, OUTPUT_PUSH_PULL_NOSPEED_LIMIT

#define PIN_IO_A0			D, 5, HIGH, INPUT_PULL_UP_WITHOUT_ITERRUPT
#define PIN_IO_A1			D, 6, HIGH, INPUT_PULL_UP_WITHOUT_ITERRUPT
#define PIN_IO_A2			D, 7, HIGH, INPUT_PULL_UP_WITHOUT_ITERRUPT
#define PIN_IO_A3			A, 5, HIGH, INPUT_PULL_UP_WITHOUT_ITERRUPT
#define PIN_IO_A4			A, 4, HIGH, INPUT_PULL_UP_WITHOUT_ITERRUPT
#define PIN_IO_A5			C, 4, HIGH, INPUT_PULL_UP_WITHOUT_ITERRUPT
#define PIN_IO_A6			C, 5, HIGH, INPUT_PULL_UP_WITHOUT_ITERRUPT
#define PIN_IO_A7			C, 6, HIGH, INPUT_PULL_UP_WITHOUT_ITERRUPT

#define PIN_I2C_SDL			C, 1, HIGH, OUTPUT_OPEN_DRAIN_NOSPEED_LIMIT
#define PIN_I2C_SDA			C, 0, HIGH, OUTPUT_OPEN_DRAIN_NOSPEED_LIMIT

#define PIN_USART_RXD		C, 2, HIGH, INPUT_PULL_UP_WITHOUT_ITERRUPT
#define PIN_USART_TXD		C, 3, HIGH,	OUTPUT_PUSH_PULL_SPEED_LIMIT_10MHZ

#endif /* MAIN_H_ */
