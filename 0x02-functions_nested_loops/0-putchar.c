#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - main block of the program
 *
 * Description: print _putchar foolwed by a new line
 * Return: 0.
 */
int main(void)
{
	char x[] = "_putchar";
	int i;
	int len = strlen(x);

	for (i = 0; i < len; i++)
	{
		putchar(x[i]);
	}

	putchar('\n');
	return (0);
}
