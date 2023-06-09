#include "lists.h"
/**
 * add_nodeint - function that adds a new node
 * @head: pointer to head of the list
 * @n: integer to be stored in new node
 * Return: NULL else return address on success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
