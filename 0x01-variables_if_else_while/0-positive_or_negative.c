#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
/*This main code generates a random numbers*/
{
	/*main code and below the var numbe */
	int n;
	/*this is the code that generate numbers*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d ", n);
	if (n > 0)
	{printf("is positive\n"); }
	else if (n == 0)
	{printf("is zero\n"); }
	else
	{printf("is negative\n"); }
	return (0);
}
