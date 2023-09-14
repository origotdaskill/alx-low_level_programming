#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);

    if (num_bytes < 0) {
        printf("Error\n");
        return 2;
    }

    // Print the opcodes
    __asm__ __volatile__(
        ".L0:\n"
        "   nop\n"
        "   cmpl %0, %1\n"
        "   je .L1\n"
        "   jmp .L0\n"
        ".L1:\n"
        :
        : "g"(num_bytes), "r"(0)
        : "cc"
    );

    return 0;
}
