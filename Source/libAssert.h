/**
 * Library for assertions.
 *
 *
 */
#ifndef LIB_ASSERT_H
#define LIB_ASSERT_H
#pragma once

#include <stdint.h>
#include <string.h>

#define SUCCESS  1	/**< Success return cases are positive. Normal success is 1. */
#define ERROR   -1	/**< Error cases are negative. Default error is -1. */

/**
 * Assert expression is successful.
 * @param[in] first value to compare.
 * @param[in] second value to compare.
 * @param[in] message to print if failed.
 * @param[out] returns SUCCESS or ERROR.
 */
int32_t assert_success(int i1, int i2, char *msg);

#endif
