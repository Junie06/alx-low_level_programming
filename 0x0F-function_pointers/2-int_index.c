#include "function_pointers.h"

/**
 * int_index - entry point to function
 * @array: array
 * @size: number of elements in the array
 * @cmp: function pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
				return (i);
		}
	}
	return (-1);
}
