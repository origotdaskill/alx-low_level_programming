#include <stdarg.h>
#include <unistd.h>

/**
 * _print_nonprintable_string - Prints a string with non-printable characters
 *                             represented as \x followed by ASCII code.
 * @str: The string to print.
 *
 * Return: Number of characters written.
 */
int _print_nonprintable_string(char *str)
{
    int count = 0;

    if (str == NULL)
        return (-1);

    while (*str)
    {
        if (*str < 32 || *str >= 127)
        {
            count += _putchar('\\');
            count += _putchar('x');
            count += _putchar("0123456789ABCDEF"[(*str / 16) % 16]);
            count += _putchar("0123456789ABCDEF"[*str % 16]);
        }
        else
        {
            _putchar(*str);
            count++;
        }

        str++;
    }

    return (count);
}
