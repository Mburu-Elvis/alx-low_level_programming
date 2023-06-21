#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array to search an integer from
 * @size: the number of elements in the array
 * @cmp: pointer to a function to be used to compare values
 *
 * Return: index of the first element for which cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, flag = -1;

	if (size <= 0)
		return (-1);
	if (!cmp || (array == NULL))
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
		else
			flag = -1;
	}
	if (flag == -1)
		return (-1);
	return (flag);
}
