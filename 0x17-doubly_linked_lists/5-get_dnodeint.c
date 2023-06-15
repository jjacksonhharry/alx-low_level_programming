#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 * @head: Pointer to the head of the list
 * @index: Index of the node, starting from 0
 * Return: NULL else the ninth address
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (i == index)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}
