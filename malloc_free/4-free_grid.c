#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_grid - prints buffer in hexa
 * @grid: the address of memory to print
 * @height: the address of memory to print
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
