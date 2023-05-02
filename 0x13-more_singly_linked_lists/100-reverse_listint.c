#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t
 * @head: head of list
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv, *nxt;

	prv = NULL;
	nxt = NULL;

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}
	*head = prv;
	return (*head);
}
