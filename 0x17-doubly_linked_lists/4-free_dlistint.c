#include "lists.h"

/**
 * free_dlistint - a function that frees a list
 * @head: pointer to first node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
