#include "lists.h"

/**
 * pop_listint - function that will delete the first item on the linked list
 * @head: pointer to the first node
 * Return: data in headnode else NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int retdata;

	if (!head || !*head)
		return (0);

	retdata = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (retdata);
}
