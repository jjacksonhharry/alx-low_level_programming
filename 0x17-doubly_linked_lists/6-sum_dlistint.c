#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - function that returns the sum of all the data of a dlistint_t
 * @head: Pointer to the head of the list
 * Return: sum of all the data (n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
