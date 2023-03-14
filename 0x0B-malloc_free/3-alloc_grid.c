#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Create a 2D array using nested loops.
 *
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the newly created 2D array, or NULL if error occurs.
 */
int **alloc_grid(int width, int height)
{

int **mee;
int x, y;

if (width <= 0 || height <= 0)
return (NULL);

mee = malloc(sizeof(int *) * height);

if (mee == NULL)
return (NULL);

for (x = 0; x < height; x++)
{
mee[x] = malloc(sizeof(int) * width);

if (mee[x] == NULL)
{
for (; x >= 0; x--)
free(mee[x]);
free(mee);
return (NULL);
}
}

for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
mee[x][y] = 0;
}

return (mee);
}

