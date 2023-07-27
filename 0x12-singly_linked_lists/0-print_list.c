#include "lists.h"

/**
 * print_list - p function rints all the elements of a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] (nil)\n", 0);
		h = h->next;
		node++;
	}

	return (node);
}
