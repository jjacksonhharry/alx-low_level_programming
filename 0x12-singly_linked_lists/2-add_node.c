#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node -  function that adds a new node at the beginning of a list_t list
 * @head: pointer to head of the list
 * @str: string to be stored in new node
 * Return: NULL else return address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
