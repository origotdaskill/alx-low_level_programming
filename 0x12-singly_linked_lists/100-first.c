#include <stdio.h>

void __attribute__((constructor)) pre_main(void);

/**
 * pre_main - Function that runs before main
 */
void pre_main(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
