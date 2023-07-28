#include "lists.h"

/**
 * add_node_end - it adds a new node at the end of a linked list
 * @head: double pointer for the list
 * @str: element to assign to the new node
 *
 * Return: address or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *temp = *head;

	if (!new_node)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (!(*head))
	{
		*head = new_node;
	}

	else
	{
		while (temp->next)
		temp = temp->next;

		new_node->next = temp->next;
		(*head)->next = new_node;
	}
	return (new_node);
}
