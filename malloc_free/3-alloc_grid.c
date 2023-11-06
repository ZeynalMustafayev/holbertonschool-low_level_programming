#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - prints buffer in hexa
 * @width: the address of memory to print
 * @height: the address of memory to print
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(height * sizeof(int *));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));

		if (ar[i] == NULL)
		{
			while (i >= 0)
			{
				free(ar[i]);
				i--;
			}
			free(ar);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			ar[j][k] = 0;
	}
	return (ar);
}
