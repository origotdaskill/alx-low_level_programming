#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - Our custom printf function
 * @format: The format string
 *
 * Return: The number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (format && format[count])
    {
        if (format[count] == '%' && format[count + 1])
        {
            switch (format[count + 1])
            {
            case 'c':
                count += write(1, &va_arg(args, int), 1);
                break;
            case 's':
                count += write(1, va_arg(args, char *), 1);
                break;
            case '%':
                count += write(1, "%", 1);
                break;
            case 'd':
            case 'i':
                count += write_number(va_arg(args, int));
                break;
            case 'u':
                count += write_unsigned(va_arg(args, unsigned int));
                break;
            case 'o':
                count += write_octal(va_arg(args, unsigned int));
                break;
            case 'x':
                count += write_hex(va_arg(args, unsigned int), 0);
                break;
            case 'X':
                count += write_hex(va_arg(args, unsigned int), 1);
                break;
            default:
                count += write(1, "%", 1);
                count += write(1, &format[count + 1], 1);
            }
            count++;
        }
        else
        {
            count += write(1, &format[count], 1);
        }
        count++;
    }

    va_end(args);
    return (count);
}
/**
 * _print_number - Print an integer
 * @n: The integer to print
 *
 * Return: The number of characters printed
 */
int _print_number(int n)
{
	char buffer[20]; /* Assuming a 32-bit integer can have at most 10 digits */
	int count = 0;

	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}

	if (n == 0)
		return (write(1, "0", 1));

	while (n > 0)
	{
		buffer[count++] = n % 10 + '0';
		n /= 10;
	}

	while (--count >= 0)
		write(1, &buffer[count], 1);

	return (count);
}
/**
 * _print_binary - Print an unsigned integer in binary
 * @n: The unsigned integer to print
 *
 * Return: The number of characters printed
 */
int _print_binary(unsigned int n)
{
	char buffer[32]; /* Assuming a 32-bit integer */
	int count = 0;

	if (n == 0)
		return (write(1, "0", 1));

	while (n > 0)
	{
		buffer[count++] = (n % 2) + '0';
		n /= 2;
	}

	while (--count >= 0)
		write(1, &buffer[count], 1);

	return (count);
}
