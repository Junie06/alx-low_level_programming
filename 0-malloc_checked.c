#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: argument to be checked
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

		ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
