#include "main.h"

/**
 * Calculate the square root of a number using recursion.
 *
 * This function calculates the square root of a number.
 *
 * @param x The number for which to calculate the square root.
 * @return The calculated square root of the input number.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_recursive(n, 1));
}

/**
 * Calculate the square root of a number using recursion.
 *
 * This function calculates the square root of a number.
 *
 * @param x The number for which to calculate the square root.
 * @return The calculated square root of the input number.
 */
int sqrt_recursive(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (sqrt_recursive(n, x + 1));
}
