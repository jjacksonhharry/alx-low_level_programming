#include "lists.h"
/**
 * pop_listint - tion that deletes the head node of a listint_t
 * @head: pointer to first node
 * Return: heads node
 */
int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *tmp, *next;

	if (*head == NULL)
		return (0);

	tmp = *head;

	next = tmp->next;
	first_node = tmp->n;

	free(tmp);

	*head = next;

	return (first_node);
}
