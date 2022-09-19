#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 *
 * Return: 0
 */
void reset_to_98(int *n)
{
	*n = 98;
}


int main(void)
{
	int n;
	int *x;

	n = 98;
	x = &n;

	printf("n=%d", n);
	reset_to_98(int *n);
	printf("n=%d", n);

	return (0);
}
