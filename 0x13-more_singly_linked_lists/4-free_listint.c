#include "lists.h"

/**
 * free_listint - function that frees listint_t linked list
 * @head: pointer tot the list
 * Return: NULL
 */

void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
