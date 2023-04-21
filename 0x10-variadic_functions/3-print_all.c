#include "variadic_functions.h"

/**
* print_all - a mini printf
* @format: describes the format specifier
* Return: None
*/
void print_all(const char * const format, ...)
{
	va_list print;
	int i = 0, len = 0, flag;
	char *ptr;

	while (format[len] != '\0')
		len++;
	va_start(print, format);
	while (format != NULL && i < len)
	{
		flag = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(print, int));
				break;
			case 'i':
				printf("%d", va_arg(print, int));
				break;
			case 'f':
				printf("%f", va_arg(print, double));
				break;
			case 's':
			{
				ptr = va_arg(print, char*);
				if (ptr == NULL)
					ptr = "(nil)";
				printf("%s", ptr);
				break;
			}
			default:
				flag = 0;
				break;
		}
		if (i < (len - 1) && flag == 1)
		{
			printf(", ");
		}
		i++;
	}
	va_end(print);
	printf("\n");
}
