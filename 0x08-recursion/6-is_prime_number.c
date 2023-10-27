/**
 * is_prime_number - Check if the input integer is a prime number.
 * @n: The integer to be checked.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	int i ;

	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	
	i = 5;
	while ( i * i <= n)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return (0);
		}
	}
	return (1);
}
