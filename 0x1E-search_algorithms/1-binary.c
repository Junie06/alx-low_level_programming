#include "search_algos.h"
/**
 * print_array - displays an array
 * @array: a pointer to the first element of the array to print
 * @low: the first index to print
 * @high: the last index to print
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i<= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the element to find
 *
 * Return: index where found, otherwise, -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		
		print_array(array, low, high);
		
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	
	return (-1);
}
