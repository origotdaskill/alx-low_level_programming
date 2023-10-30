#include<stdio.h>

/**                                                                
 * main - Entry point of the program                                      
 *                                                                        
 * Description: This program takes command-line arguments and prints them
 * one per line, including the program name itself.
 *                                                 
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 if the program runs successfully.
 */
int main(int argc, char *argv[])
{	
	int i = 0;

	for (	i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
