#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @old_size: old size of former memory space
 * @ptr: address of former memory
 * @new_size: new size to be allocated
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr;
	char *old_ptr = ptr;

	if ((new_size > old_size) && old_ptr)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr[i];
		free(old_ptr);
	}

	else if (new_size == old_size)
		return (old_ptr);
	else if (!old_ptr)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);
	}
	else if (!new_size && old_ptr)
	{
		free(ptr);
		return (NULL);
	}
	return (new_ptr);
}
