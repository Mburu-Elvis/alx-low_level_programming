#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array of characters
 * @size: the size of the memory to print
 * @c: the size to be assgned to the address
 */

void simple_print_buffer( char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}

		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
	
}

/**
 * main - creates an array of chars and initialized
 *
 * Return: 0.
 */

int main(void)
{
	char *buffer;

	buffer = create_array(98,"H");
	if (buffer == NULL)
	{
		printf("Failed to allocate memory\n");
		return (1);
	}
	create_array(buffer, 98);
	free(buffer);
	return (0);
}
