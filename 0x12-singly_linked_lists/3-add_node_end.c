#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be stored in the new node
 * Return: NULL else return address to new element on success
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t str_len = 0;

	if (str == NULL)
		str_len = 0;

	while (str[str_len] != '\0')
		str_len++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = NULL;

	current_node = *head;

	if (current_node == NULL)
		*head = new_node;
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (*head);
}
