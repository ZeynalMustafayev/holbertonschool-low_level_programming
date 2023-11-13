#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - prints buffer in hexa
 * @max: the address of memory to print
 * @min: the address of memory to print
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(int) * (max - min + 1));
	if (ar == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		ar[i - min] = i;
	return (ar);
}
