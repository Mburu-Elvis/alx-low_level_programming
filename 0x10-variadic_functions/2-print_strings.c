#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: None
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *arg;

	va_start(ap, n);
	for (; i < n; i++)
	{
		arg = va_arg(ap, char *);
		if (arg == NULL)
			arg = "(nil)";
		if (i != (n - 1) && separator != NULL)
			printf("%s%s", arg, separator);
		if (i == (n - 1))
			printf("%s\n", arg);
	}
	va_end(ap);
}
