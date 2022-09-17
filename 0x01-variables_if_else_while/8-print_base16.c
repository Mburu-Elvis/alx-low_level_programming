#include <stdio.h>

/**
 * main - main block
 * Description: 8-print_base16.c
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char c = 'a';
	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
