#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Description: swap the value of a with that of b and vice versa
 * Return:None
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
