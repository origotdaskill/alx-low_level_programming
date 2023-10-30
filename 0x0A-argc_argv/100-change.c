#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, numCoins;
	int coins[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return 1;	
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");	
		return 0;
	}

	numCoins = 0;

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			numCoins++;
		}	
 	}

	printf("%d\n", numCoins);
	return 0;
}

