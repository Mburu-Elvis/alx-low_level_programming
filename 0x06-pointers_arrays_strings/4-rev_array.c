#include "main.h"

/**
 * reverse_array -  a function that reverses the array contents
 * @a: array pointer;
 * @n: number of elements;
 *
 * Description: a function that reverses array a with n elements
 * Return: None
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1;
	int temp;

	for (; i < (n / 2); i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
