#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: it's a list of types of arguments passed to the function
 *
 * Return: None
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;
	char *str, spec, args[] = {'c', 'i', 'f', 's'};

	va_start(ap, format);
	while (format[i])
	{
		spec = args[i];
		switch (spec)
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d ", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
