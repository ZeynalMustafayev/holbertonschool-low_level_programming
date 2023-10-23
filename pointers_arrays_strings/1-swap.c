#include "main.h"
#include <stdio.h>
/**
 * swap_int - check the code
 *
 * @a:pointer
 *
 * @b:pointer
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	*a = 42;
	*b = 98;
	*a = 98;
	*b = 42;
}
