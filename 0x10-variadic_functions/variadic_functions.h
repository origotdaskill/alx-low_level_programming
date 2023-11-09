#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of its parameters.
 * @n: The number of parameters.
 * @...: Variable number of parameters.
 *
 * Return: Sum of all parameters.
 *         If n is 0, return 0.
 */
int sum_them_all(const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */
