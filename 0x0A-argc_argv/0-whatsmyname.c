#include <stdio.h>

/**
 * main - Print the name of the program.
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[]) {
	if (argc > 0 && argv[0] != NULL) 
	{
		printf("%s\n", argv[0]);
	}

	return 0;
}
