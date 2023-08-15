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
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			putchar('0' + i);
			putchar(',');
			putchar(' ');
			putchar('0' + j);
			if (i != 9 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	
	return (0);
}
