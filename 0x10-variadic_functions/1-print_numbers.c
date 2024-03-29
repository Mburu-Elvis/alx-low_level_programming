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

	va_start(ap, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
