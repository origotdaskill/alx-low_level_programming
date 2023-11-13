#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Produces output according to a format.
 * @format: A character string containing directives.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			switch (*(format + 1))
			{
			case 'c':
				putchar(va_arg(args, int));
				count++;
				break;
			case 's':
				count += printf("%s", va_arg(args, char *));
				break;
			case 'd':
			case 'i':
				count += printf("%d", va_arg(args, int));
				break;
			case '%':
				putchar('%');
				count++;
				break;
			default:
				putchar('%');
				putchar(*(format + 1));
				count += 2;
			}
			format += 2;
		}
		else
		{
			putchar(*format);
			count++;
			format++;
		}
	}

	va_end(args);

	return count;
}
