#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: a program that prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
.*/
int main(void)
{

	for (int i = 0 ; i < 10; i++)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
        	}
	}
	putchar('\n');

	return (0);
}
