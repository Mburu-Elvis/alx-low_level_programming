#include <stdio.h>
#include <stdlib.h>

/**
 * main - block
 * Description: Print alphabets
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e')
		{
			if (c != 'q')
			{
				putchar(c);
			}
		}
		c++;
	}
	putchar('\n');
	return (0);
}
