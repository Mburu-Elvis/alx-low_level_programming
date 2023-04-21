#include "variadic_functions.h"

/**
* print_all - a mini printf
* @format: describes the format specifier
* Return: None
*/
void print_all(const char * const format, ...)
{
	va_list print;
	int i = 0;
	char *ptr;

	va_start(print, format);
	while (format[i] != '\0')
	{
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
				ptr = va_arg(print, char *);
				if (ptr == NULL)
					printf("%s", "(nil)");
				else
					printf("%s", ptr);
				break;
			}
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(print);
}
