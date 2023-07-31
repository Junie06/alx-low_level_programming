#include "lists.h"

/**
 * add_nodeint_end - it will insert a new node at the end of the linked list
 * @head: pointer to the start of the linked list
 * @n: element to be included in the new node
 * Return: address of new element, else NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new_node;

	return (new_node);
}
