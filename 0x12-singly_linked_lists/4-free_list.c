#include "lists.h"

/**
 * free_list - function that frees the linked list
 * @head: list to be freed
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
