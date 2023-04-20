#include "variadic_functions.h"

/**
* print_numbers - function that prints numbers, followed by new line
* @separator: the string the acts as delimiter
* @n: number of numbers passed to the function
*
* Return: None
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print_no;
	unsigned int i;

	va_start(print_no, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d\n", va_arg(print_no, int));
		if (separator != NULL && i < (n - 1))
			printf("%d%s", va_arg(print_no, int), separator);
		if (separator == NULL && i < (n - 1))
			printf("%d ", va_arg(print_no, int));
	}
	va_end(print_no);
}
