#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: The hash table
 * @key: The key string
 * Return: NULL else on success the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int i;

	if (key == NULL || ht == NULL)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);

	temp = ht->array[i];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (strdup(temp->value));
		temp = temp->next;
	}

	return (NULL);
}
