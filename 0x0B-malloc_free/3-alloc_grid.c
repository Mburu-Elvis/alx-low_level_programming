#include "main.h"

/**
 * alloc_grid -  function that returns a pointer to a 2-D array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: pointer to the 2-D grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
