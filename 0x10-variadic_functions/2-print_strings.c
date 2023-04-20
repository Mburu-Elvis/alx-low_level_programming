#include "variadic_functions.h"

/**
* print_strings - a function that prints strings
* @separator: delimiter
* @n: number of strings to be printed
*
* Return: None
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print_str;

	va_start(print_str, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i < (n - 1))
			printf("%s%s", va_arg(print_str, char *), separator);
		else if (separator == NULL && i < (n - 1))
			printf("%s%s", va_arg(print_str, char *), "(nil)");
		if (i == (n - 1))
			printf("%s\n", va_arg(print_str, char *));
	}
	va_end(print_str);
}
