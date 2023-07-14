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
	unsigned int i, j;
	char *ptrAlloc;
	char *old_ptr = ptr;

	if (!ptr)
	{
		ptrAlloc = malloc(new_size);
			return (ptr);
	}
	if (old_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	ptrAlloc = malloc(new_size);

	if (!ptrAlloc)
		return (NULL);
	if (new_size > old_size)
		j = old_size;
	else
		j = new_size;
	for (i = 0; i < j; i++)
		ptrAlloc[i] = old_ptr[i];
	free(ptr);

	return (ptrAlloc);
}
