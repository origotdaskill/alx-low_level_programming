#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 */
int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    putchar('\n');
}
