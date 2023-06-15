#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: the size of each element in bytes
 *
 * Return: if successful pointer to allocated memory, else NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
