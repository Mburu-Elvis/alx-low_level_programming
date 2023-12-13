#include "search_algos.h"

/**
 * binary_search - function implementing binary search algorithm
 * @array: the array to search a value from
 * @size: the number of elements in the array
 * @value: the value to search in the array
 * Return: index of value, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid;

	if (array == NULL)
		return (-1);
	while (start <= end)
	{

		mid = start + (end - start) / 2;
		print_array(array, start, end);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
/**
 * print_array - function to print array
 * @array: array to print
 * @size: number of elements to print
 * @start: the point to start looping
 * Return: nothing
 */
void print_array(int *array, int start, int size)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= size; i++)
	{
		printf("%d", array[i]);
		if (i != size)
			printf(", ");
	}
	printf("\n");
}
