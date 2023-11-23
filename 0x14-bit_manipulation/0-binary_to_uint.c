#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string representing a binary number.
 *
 * Return: The converted number, or 0 if there is an invalid character
 *         in the string or if the input string is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    if (b == NULL)
        return 0;

    while (*b != '\0')
    {
        if (*b != '0' && *b != '1')
            return 0;

        result = result * 2 + (*b - '0');
        b++;
    }

    return result;
}

int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);

    n = binary_to_uint("101");
    printf("%u\n", n);

    n = binary_to_uint("1e01");
    printf("%u\n", n);

    n = binary_to_uint("1100010");
    printf("%u\n", n);

    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);

    return (0);
}
