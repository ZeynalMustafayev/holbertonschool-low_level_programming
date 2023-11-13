#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the address of memory to print
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ar;

	unsigned int a;

	a = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * a);

	if (ar == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		ar[a] = 0;

	return (ar);
}
