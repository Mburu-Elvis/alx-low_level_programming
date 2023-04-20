#include "variadic_functions.h"

/**
 * sum_them_all - a function that sums all its parameters
 * @n: first arg of the function of type int
 *
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum_args;
	int sum = 0;
	unsigned int i;

	va_start(sum_args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(sum_args, int);
	va_end(sum_args);
	return (sum);
}
