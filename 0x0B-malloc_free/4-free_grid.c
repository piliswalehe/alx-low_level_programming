#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - unction that frees a 2 dim grid created by your alloc_grid fnctn
 * @grid: pointer
 * @height: input height
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
