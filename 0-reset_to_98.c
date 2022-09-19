#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 *
 * Return: 0
 */

void reset_to_98(int *n)
{
	*x = 98;

int main(void)
{
	int n;
	int *x;

	x = &n;
	n = 402;

	printf("n=%d", n);
	reset_to_98(n);
	printf("n=%d", n);
}
