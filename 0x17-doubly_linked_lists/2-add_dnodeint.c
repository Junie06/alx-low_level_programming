#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: head pointer
 * @n: data to insert
 * Return: 0 (Success)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *h;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	h = *head;

	if (h)
	{
		while (h->prev)
		h = h->prev;
	}
	new_node->next = h;

	if (h)
		h->prev = new_node;

	*head = new_node;
	return (new_node);
}
