#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function to print strings
 * @separator: the separator betweem strings
 * @n: number of strings
 *
 * Description: prints strings n with a separator
 * Return: None
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *c;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(ap, char *);
		if (c == NULL)
			printf("(nil)");
		else
		{
			printf("%s", c);
			if (separator != NULL && i != (n - 1))
				printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
