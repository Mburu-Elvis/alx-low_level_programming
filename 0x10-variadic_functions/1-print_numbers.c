#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function to print numbers
 * @separator: a character to separate two numbers
 * @n: the number of numbers passed as arguments
 *
 * Description: prints a number passed as an argument then a char separator
 * Return: None
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (i < (n - 1))
		{
			if (separator == NULL)
				printf("%d ", num);
			else
				printf("%d%s ", num, separator);
		}
		else
			printf("%d", num);
	}
	va_end(ap);
	printf("\n");
}