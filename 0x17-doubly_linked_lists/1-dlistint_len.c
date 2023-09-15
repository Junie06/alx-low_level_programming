#include "lists.h"
/**
 * dlistint_len - function that prints elements of a d    oubly linked list
 * @h: parameter/ head pointer
 * Return: 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; nodes; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}
