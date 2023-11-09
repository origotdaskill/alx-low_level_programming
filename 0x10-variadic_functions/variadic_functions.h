#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
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
/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * @...: Variable number of strings.
 *
 * Description: If separator is NULL, it won't be printed.
 *              If a string is NULL, it will print (nil) instead.
 *              Prints a new line at the end of the function.
 */
void print_strings(const char *separator, const unsigned int n, ...);
/**
 * print_all - Prints anything based on the format string.
 * @format: A list of types of arguments passed to the function.
 * @...: Variable number of arguments.
 *
 * Description: 'c' for char, 'i' for integer, 'f' for float,
 *              's' for char* (if string is NULL, print (nil)),
 *              any other char is ignored.
 *              Prints a new line at the end of the function.
 */
void print_all(const char * const format, ...);
#endif /* VARIADIC_FUNCTIONS_H */
