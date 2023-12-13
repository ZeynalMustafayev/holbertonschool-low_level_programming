#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ar;
	unsigned int i;

	ar = malloc(sizeof(hash_table_t) * size);
	if (ar == NULL)
		return (NULL);
	ar->size = size;
	ar->array = calloc(ar->size, sizeof(hash_node_t));

	for (i = 0; i < ar->size; i++)
		ar->array[i] = NULL;
	return (ar);
}
