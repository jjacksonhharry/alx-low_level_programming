#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * @h: Pointer to a pointer to the head
 * @idx: Index of the list where new node is added
 * @n: Value to be stored in new node
 * Return: NULL else address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current_node != NULL)
	{
		if (i == idx - 1)
		{
			if (current_node->next == NULL)
				return (add_dnodeint_end(h, n));

			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
			return (NULL);

			new_node->n = n;
			new_node->prev = current_node;
			new_node->next = current_node->next;
			current_node->next->prev = new_node;
			current_node->next = new_node;
			return (new_node);
		}
		current_node = current_node->next;
		i++;
	}
	return (NULL);
}
