#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2d array
 * @width: rows
 * @height: columns
 * Return: a pointer to an int
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int *));

	if (!ptr)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (!ptr[i])
			{
				for (i = 0; i >= 0; i++)
					free(ptr[i]);

				free(ptr);
				return (NULL);
			}
	}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	return (ptr);
}
