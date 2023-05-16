#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **axe, x, y;
       	axe = malloc(sizeof(*axe) * height);

	if (width <= 0 || height <= 0 || axe == 0)
	{
	return (NULL);
	}
	else
	{
	for (x = 0; x < height; x++)
	{
	axe[x] = malloc(sizeof(**axe) * width);
	if (axe[x] == 0)
	{
	/*Free everything if malloc fails*/
	while (x--)
	free(axe[x]);
	free(axe);
	return (NULL);
	}

	for (y = 0; y < width; y++)
	axe[x][y] = 0;
	}
	}

	return (axe);
}
