#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements in an array of integers
 * @a: the array to be considered
 * @n: the number of elements to be printed
 *
 * Description: printing n numbers in an array
 * Return: None
 */
void print_array(int *a, int n)
{
	int i = 0;

	n--;
	while (i <= n)
	{
		if (i <= (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	printf("\n");
}
