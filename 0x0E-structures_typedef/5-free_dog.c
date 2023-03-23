#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees the memory allocated to dog
 * @d: the dog typdef
 *
 * Description: free space allocated to d
 * Return: None
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
