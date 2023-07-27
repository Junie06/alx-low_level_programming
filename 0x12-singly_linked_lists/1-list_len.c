#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements 
 * in a linked list_t list
 * @h: a pointer(link) to the list_t
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		h = h->next;
		element++;
	}
	return (element);
}
