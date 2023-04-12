#include "main.h"

/**
 * free_grid - function
 * @grid: grid
 * @height: int
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int j = 0;

	for (; j < height; j++)
		free(grid[j]);
	free(grid);
}
