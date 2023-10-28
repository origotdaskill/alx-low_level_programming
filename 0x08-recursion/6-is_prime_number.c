/**
 * is_divisible - Check if a number is divisible.
 * @n: The number to check.
 * @i: The divisor.
 *
 * Return: 1 if it's a prime number, 0 otherwise.
 */
int is_divisible(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0 || n % (i + 2) == 0)
		return (0);

	return (is_divisible(n, i + 6));
}

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if it's a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	return (is_divisible(n, 5));
}
