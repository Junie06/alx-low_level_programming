#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to an int
 */
int *array_range(int min, int max)
{
	int *ptr, size, i;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	ptr = malloc(size * sizeof(int));

	if (!ptr)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
