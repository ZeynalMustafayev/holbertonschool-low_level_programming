#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index;
	index = hash_djb2(key) % size;
	return (index);
}
