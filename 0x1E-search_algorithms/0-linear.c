#include "search_algos.h"

/**
 * linear_search - function implementing linear search algorithm
 * @array: the array to search from
 * @size: the number of elements in the array
 * @value: the number to search
 *
 * Return: the index where the `value` is found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
