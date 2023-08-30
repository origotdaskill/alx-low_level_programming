#include <unistd.h>

/**
 * _putchar : function print any given parametre
 */
int _putchar(char c)
{
        return write(1, &c, 1);
}
