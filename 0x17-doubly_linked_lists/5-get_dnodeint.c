#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to first node
 * @index: position
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index)
	{
		head = head->next;
		index--;
	}
	if (!index)
		return (head);
	else
		return (NULL);
}
