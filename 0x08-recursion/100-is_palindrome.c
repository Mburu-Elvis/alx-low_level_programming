#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);

	return (_palindrome_check(s, len));
}

/**
 * _palindrome_check - helper function to check if a string is a palindrome.
 * @s: The string to check.
 * @len: The length of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int _palindrome_check(char *s, int len)
{
	if (*s != *(s + len - 1))
		return (0);

	if (len <= 2)
		return (1);

	return (_palindrome_check(s + 1, len - 2));
}
