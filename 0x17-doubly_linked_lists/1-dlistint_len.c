#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - function that returns the number of elements in a linked dlistint_t list
 * @h: pointer to the head node of the list
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
