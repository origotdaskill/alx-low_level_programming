#include <stdio.h>

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
