#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: The hash table
 * @value: The value string
 * @key: The key string
 * Return: 1 on success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int i;

	if (key == NULL || ht == NULL)
		return (0);

	i = key_index((unsigned char *)key, ht->size);

	temp = ht->array[i];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[i];
	ht->array[i] = new_node;

	return (1);
}
