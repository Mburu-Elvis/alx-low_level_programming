#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 * @n: number to start from
 *
 * Description: print all natural numbers from n to 98
 * Return: void
 */
void print_to_98(int n)
{
	while ((n <= 98) || (n >= 98))
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n == 98)
		{
			printf("%d", n);
			break;
		}
		else
		{
			printf("%d, ", n);
			n--;
		}
	}

	printf("\n");
}
