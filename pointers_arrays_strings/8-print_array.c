#include "main.h"
#include <stdio.h>
/**
 * print_array - print array
 * @a: var a
 * @n: var n
 */
void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
	{
		printf("%d", a[arr]);
		if (arr != n-1)
			printf(", ");
	}
	printf("\n");
}
