#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: is the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: None
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	for (; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d\n", va_arg(ap, int));
		else
			printf("%d%s ", va_arg(ap, int), separator);
	}
}
