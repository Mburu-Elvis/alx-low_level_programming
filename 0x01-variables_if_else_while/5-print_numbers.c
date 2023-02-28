#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Display base 10 digits
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
