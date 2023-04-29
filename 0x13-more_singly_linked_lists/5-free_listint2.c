#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node, *deeg;

	if (head != NULL)
	{
		current_node = *head;

		while ((deeg = current_node) != NULL)
		{
			current_node = current_node->next;
			free(deeg);
		}
		*head = NULL;
	}
}
