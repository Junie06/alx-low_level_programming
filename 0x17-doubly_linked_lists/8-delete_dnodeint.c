#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at
 * an index of a list
 * @head: head pointer
 * @index: insertion point
 * Return: 1 for success or -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1 = NULL, *h2 = NULL;
	unsigned int i;

	h1 = *head;

	if (h1)
		while (h1->prev)
			h1 = h1->prev;

	i = 0;

	while (h1)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h1->next;
				if (*head)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;
				if (h1->next)
					h1->next->prev = h2;
			}
			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		i++;
	}
	return (-1);
}
