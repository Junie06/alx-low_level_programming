#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: element to search for
 *
 * Return: -1 if unsuccessful, otherwise the index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (!array)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%li] = [%i]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
