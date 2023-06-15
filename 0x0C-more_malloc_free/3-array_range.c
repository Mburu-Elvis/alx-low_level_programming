#include "main.h"

/**
 * array_range -  function that creates an array of integers
 * @min: minimum number included
 * @max: maximum number included
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int range, i = 0;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	arr = malloc(sizeof(int) * range);
	if (arr == NULL)
		return (NULL);
	for (; i < range; i++)
		arr[i] = min++;
	return (arr);
}
