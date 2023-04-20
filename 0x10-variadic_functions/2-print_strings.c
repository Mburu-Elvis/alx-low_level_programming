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
	char *str;

	va_start(print_str, n);
	str = va_arg(print_str, char *);
	for (i = 0; i < n; i++)
	{
		if (str == NULL)
			str = "(nil)";
		if (separator != NULL && i < (n - 1))
			printf("%s%s", str, separator);
		else if (separator == NULL && i < (n - 1))
			printf("%s", str);
		if (i == (n - 1))
			printf("%s", str);
		str = va_arg(print_str, char *);
	}
	printf("\n");
	va_end(print_str);
}
