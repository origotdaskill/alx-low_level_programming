#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: 'n'or -1 square root.
 */
int _sqrt_recursion(int n)
{
        return (sqrt_recursive(n, 1));
}

/**
 * sqrt_recursive - Recursively finds the square root of a number.
 * @n: The number to find the square root of.
 * @x: The current guess for the square root.
 *
 * Return:  'n' or -1  square root.
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
