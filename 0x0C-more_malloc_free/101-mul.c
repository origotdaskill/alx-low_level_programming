#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"


int multiply(char *num1, char *num2);

int main(int argc, char *argv[])
{
	char *num1, *num2;
	int i, result;

	if (argc != 3)
	{
		printf("Error\n");
		return 98;				        
	}
	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i] != '\0'; i++) 
	{
		if (!isdigit(num1[i])) 
		{									       
			printf("Error\n");
			return 98;
		}
	}

	for (i = 0; num2[i] != '\0'; i++) 
	{
		if (!isdigit(num2[i])) 
		{										   
			printf("Error\n");
			return 98; 
		}
	}

	result = multiply(num1, num2);
	printf("%d\n", result);

	return 0;
}

int multiply(char *num1, char *num2)
{
	int i, j, len1, len2, result;
	
	len1 = 0;
	len2 = 0;
       	result = 0;

	while (num1[len1] != '\0') 
	{
		len1++;
	}

	while (num2[len2] != '\0') 
	{
		len2++;
	}

	for (i = 0; i < len1; i++) 
	{				       
	       for (j = 0; j < len2; j++)
	       {
		       result += (num1[i] - '0') * (num2[j] - '0');
	       }
				   
	}
	return result;
}

