#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return : n, or -1.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_recursive(n, 1));
}

/**
 * sqrt_recursive - Helper function for recursive square root calculation.
 * @n: The number for which to find the square root.
 * @x: The current guess for the square root.
 *
 * Return : n, or -1.
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
