#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - A simplified printf function.
 * @format: The format string.
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
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++; /* Move past '%' */
			switch (*format)
			{
				case 'c':
					/* Handle character specifier */
					count += write(1, &va_arg(args, int), 1);
					break;
				case 's':
					/* Handle string specifier */
					count += write(1, va_arg(args, char *), 1);
					break;
				case '%':
					/* Handle percent specifier */
					count += write(1, "%", 1);
					break;
				default:
					/* Unknown specifier, print it as is */
					count += write(1, "%", 1);
					count += write(1, format, 1);
					break;
			}
		}
		else
		{
			count += write(1, format, 1);
		}
		format++;
	}

	va_end(args);

	return count;
}

int main(void)
{
	_printf("Hello, %c! This is a %s test.%%\n", 'W', "printf");
	return (0);
}
