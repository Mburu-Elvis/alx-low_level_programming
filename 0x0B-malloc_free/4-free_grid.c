#include "main.h"

/**
 * free_grid - function that frees a 2-D grid
 * @grid: the grid to free
 * @height: the height of the grid
 *
 * Return: None
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
