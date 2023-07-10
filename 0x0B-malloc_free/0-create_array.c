#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: char to fill the array with
 * Return: NULL if it fails or char variable
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int count;

	ptr = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (ptr == 0)
	{
		return (NULL);
	}
	for (count = 0; count < size; count++)
	{
		ptr[count] = c;
	}
	return (ptr);
}
