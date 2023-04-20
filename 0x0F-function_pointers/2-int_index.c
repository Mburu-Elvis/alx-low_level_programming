#include "function_pointers.h"

/**
 * int_index - function to search an integer
 * @array: array pointer
 * @size: size of the array
 * @cmp: a function pointer to compare elements
 *
 * Return: first index which cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
