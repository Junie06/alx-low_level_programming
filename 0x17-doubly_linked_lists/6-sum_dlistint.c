#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a list
 * @head: pointer to first node
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
