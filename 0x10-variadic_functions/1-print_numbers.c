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
	int number;

	va_start(print_no, n);
	number = va_arg(print_no, int);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", number);
		if (separator != NULL && i < (n - 1))
			printf("%d%s", number, separator);
		if (separator == NULL && i < (n - 1))
		{
			separator = "";
			printf("%d%s", number, separator);
		}
		number = va_arg(print_no, int);
	}
	printf("\n");
	va_end(print_no);
}
