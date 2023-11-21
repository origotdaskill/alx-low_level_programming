#include <stdio.h>
#include <stdarg.h>

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
void print_all(const char * const format, ...) {
    va_list args;
    unsigned int i = 0;
    char *separator = "";
    const char *current_format;
    char *str;

    va_start(args, format);

    while (format && format[i]) {
        current_format = &format[i];

        switch (*current_format) {
            case 'c':
                printf("%s%c", separator, va_arg(args, int));
                break;
            case 'i':
                printf("%s%d", separator, va_arg(args, int));
                break;
            case 'f':
                printf("%s%f", separator, va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL) {
                    printf("%s(nil)", separator);
                } else {
                    printf("%s%s", separator, str);
                }
                break;
            default:
                break;
        }

        separator = ", ";
        i++;
    }

    printf("\n");

    va_end(args);
}
