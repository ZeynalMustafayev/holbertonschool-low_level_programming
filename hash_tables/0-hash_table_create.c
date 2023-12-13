#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - creating hash table
 *
 * @size: size of hash table
 *
 * Return: ar
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hashtable;

	if (size == 0)
		return (NULL);
	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);
	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashtable->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		hashtable->array[i] = NULL;
	}
	return (hashtable);
}
