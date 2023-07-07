#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * shash_table_create - function that Creates a hash table
 * @size: The size of the array
 * Return: NULL else pointer to hash table on success
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = malloc(size * sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}
/**
 * shash_table_set - Function that updates an element in the sorted hash table
 * @key: The key string
 * @ht: The sorted hash table
 * @value: The value associated with the key
 * Return: 1 on success else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *new_node, *prev = NULL;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (0);

	index = hash_djb2((unsigned char *)key) % ht->size;

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) < 0)
	{
		prev = node;
		node = node->snext;
	}
	if (node != NULL && strcmp(node->key, key) == 0)
	{
		free(node->value);
		node->value = strdup(value);
		return (1);
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (prev == NULL)
	{
		new_node->snext = ht->shead;
		new_node->sprev = NULL;
		ht->shead = new_node;
	}
	else
	{
		new_node->snext = prev->snext;
		new_node->sprev = prev;
		prev->snext = new_node;
	}
	if (new_node->snext != NULL)
		new_node->snext->sprev = new_node;
	else
		ht->stail = new_node;

	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}

/**
 * shash_table_get - function that Retrieves a value associated with a key
 * @ht: The sorted hash table
 * @key: The key string
 * Return: NULL else value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int i;

	if (key == NULL || ht == NULL)
		return (NULL);

	i = hash_djb2((unsigned char *)key) % ht->size;

	node = ht->array[i];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
/**
 * shash_table_print - Function that Prints the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	int flag = 0;
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		flag = 1;
		node = node->snext;
	}
	printf("}\n");
}
