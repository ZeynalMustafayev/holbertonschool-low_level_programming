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
	hash_table_t *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(hash_table_t *) * size);
	if (ar == NULL)
		return (NULL);
	ar->size = size;
	ar->array = malloc(sizeof(hash_node_t));
	if (ar->array == NULL)
		return (NULL);
	return (ar);
}
