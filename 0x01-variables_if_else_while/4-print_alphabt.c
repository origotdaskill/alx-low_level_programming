#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	/* Code to output the character goes here */
		if (letter != 'q' && letter != 'e')
		{
		putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
