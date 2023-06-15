#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: the size of the array
 * @c: the character to be held by the array
 *
 * Return: if size==0 NULL, else ptr to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (arr == NULL || size == 0)
		return (NULL);

	for (; i < size; i++)
		arr[i] = c;
	return (arr);
}
