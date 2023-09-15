#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at t    he end of a list
 * @head: pointer to first node
 * @n: data to input
 * Return: new_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *temp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
	}
	else
		*head = new_node;
	return (new_node);
}
