#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that creates calloc
 * @nmemb: elements
 * @size: size of bytes
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (!ptr)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
