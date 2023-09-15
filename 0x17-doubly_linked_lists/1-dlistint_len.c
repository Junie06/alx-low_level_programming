#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements of
 * a doubly linked list
 * @h: parameter/ head pointer
 * Return: 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
