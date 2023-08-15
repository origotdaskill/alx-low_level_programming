#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: a program that prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int comma = 0;
	int i;
	int j;
	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (comma)
			{
				putchar(',');
				
			}
			putchar('0' + i);
			putchar('0' + j);
			comma = 1;
		}
	}
	putchar('\n');

	return (0);
}
