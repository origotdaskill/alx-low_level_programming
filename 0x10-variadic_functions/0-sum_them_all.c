#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of its parameters.
 * @n: The number of parameters.
 * @...: Variable number of parameters.
 *
 * Return: Sum of all parameters.
 *         If n is 0, return 0.
 */
int sum_them_all(const unsigned int n, ...) {
    va_list args;
    unsigned int i;
    int sum;

    if (n == 0) {
        return 0;
    }

    va_start(args, n);

    sum = 0;

    for (i = 0; i < n; ++i) {
        sum += va_arg(args, int);
    }

    va_end(args);

    return sum;
}
