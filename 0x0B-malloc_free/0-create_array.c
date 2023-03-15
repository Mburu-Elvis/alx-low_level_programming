#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function thats creates an array of chars
 * @size: the size of the array
 * @c: the string of characters stored in the array
 *
 * Description: a function that creates an array of chars
 * Return: NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(c) * size);
	if (array == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
