#include "main.h"

/**
 * is_prime_number -  a function thats evaluates if a number is primw
 * @n: number to evaluate
 *
 * Description: a function to evaluate if n is prime
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return 0;
	}
