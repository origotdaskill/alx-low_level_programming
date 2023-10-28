#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Check if a string is a palindrome using recursion.
 * @s: The input string.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if it's a palindrome, 0 otherwise.
 */
int is_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return 1;

	if (s[start] != s[end])
		return 0;

	return is_palindrome(s, start + 1, end - 1);
}
