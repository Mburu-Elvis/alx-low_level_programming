#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as parameter \
 * on each element of an array
 * @array: the array to evaluate
 * @size: the size of the array
 * @action: function pointer to use
 *
 * Return: None
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
