#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function to calculate the sum of numbers
 * @n: first number
 *
 * Description: function that calculated the sum of all the numbers passed
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i, sum_t;

	va_start(sum, n);

	sum_t = 0;
	for (i = 0; i < n; i++)
	{
		sum_t += va_arg(sum, int);
	}
	va_end(sum);
	return (sum_t);
}
