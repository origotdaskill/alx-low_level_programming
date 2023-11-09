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
/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: Variable number of integers.
 *
 * Description: If separator is NULL, it won't be printed.
 *              Prints a new line at the end of the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...);
#endif /* VARIADIC_FUNCTIONS_H */
