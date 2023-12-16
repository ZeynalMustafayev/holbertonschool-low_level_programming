#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - Set a value in the hash table.
 * @ht: Hash table.
 * @key: Key to be indexed.
 * @value: Value to set in the hash table.
 *
 * Return: 1 if works, 0 if doesn't.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (value == NULL || key == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t *));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (!(ht->array[index]))
		ht->array[index] = new_node;
	else
	{
		current = ht->array[index];
		do {
			if (!strcmp(current->key, key))
			{
				free(new_node);
				free(current->key->value);
				current->value = strdup(value);
				return (1);
			}
			if (current->next)
			{
				current = current->next;
			}
		} while (current->next);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
