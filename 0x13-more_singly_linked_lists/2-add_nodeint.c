#include "lists.h"

/**
 * add_nodeint - function that will add new node at the start of a linked list
 * @head: pointer to the first node
 * @n: integer data type to be assigned in the new node
 * Return: address to element, else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
