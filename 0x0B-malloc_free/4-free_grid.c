#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D array.
 *
 * @grid: Pointer to the 2D array to free.
 * @height: Height of the 2D array.
 *
 * Description: Frees the memory allocated for a 2D array.
 *
 * Return: Nothing.
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
