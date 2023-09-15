#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a
 * given position
 * @h: head pointer
 * @idx: index
 * @n: data to input
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *temp = *h;

	if (*h)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);

		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;

		if (idx == 0)
		{
			new_node->next = *h;
			*h = new_node;
		}
		else
		{
			while (idx != 1)
			{
				temp = temp->next;
				idx--;
			}
			new_node->next = temp->next;
			temp->next = new_node;
			new_node->prev = temp;
			new_node->next->prev = new_node;
		}
	}
	new_node = add_nodeint(h,n);
	return (new_node);
}
