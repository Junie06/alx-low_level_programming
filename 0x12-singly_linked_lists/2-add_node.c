#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a linked list
 * @head: a double pointer to the linked list
 * @str: new string to include
 *
 * Return: the address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
