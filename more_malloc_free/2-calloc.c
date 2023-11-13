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
	char *ar;

	unsigned int a, i;

	a = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * a);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		ar[i] = 0;

	return (ar);
}
