#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a parameter
 * @array: array to be used
 * @size: the size of the array
 * @action: pointer to function to use
 *
 * Return: None
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	int j = 0;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[j]);
			j++;
		}
	}
}
