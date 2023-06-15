#include "main.h"

/**
 * malloc_checked - a function that allocates memeory using malloc
 * @b: size of memory in bytes
 *
 * Return: pointer to the allocated memory, else 98
 */
void *malloc_checked(unsigned int b)
{
	return (malloc(sizeof(b) * b));
}
