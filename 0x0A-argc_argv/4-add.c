#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[]) {
	int sum = 0;
	bool hasError = false;
	int i ;
	if (argc == 1)
	{
        	printf("0\n");
		return 0;
	}

		for (i = 1; i < argc; i++) {
		int num = 0;
		int j = 0;

		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				hasError = true;
				break;
			}
			num = num * 10 + (argv[i][j] - '0');
			j++;
		}

		if (hasError)
		{
			printf("Error\n");
			return 1;
		}

		sum += num;
	}

	printf("%d\n", sum);
	return 0;
}
