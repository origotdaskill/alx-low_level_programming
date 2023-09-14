#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	(void)argc;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	int  j;
	int i
	int sum;
	bool hasError = false;

    for (i = 1; i < argc; i++) {
        char *arg = argv[i];
        for (j = 0; arg[j] != '\0'; j++) {
            if (!isdigit(arg[j])) {
                // Check if the argument contains non-digit characters
                hasError = true;
                break;
            }
        }

        if (!hasError) {
            int num = atoi(arg);
            if (num > 0) {
                sum += num;
            }
        } else {
            break;  // Exit the loop if an error is detected
        }
    }

    if (!hasError) {
        printf("%d\n", sum);
        return 0;
    } else {
        printf("Error\n");
        return 1;
    }
}

