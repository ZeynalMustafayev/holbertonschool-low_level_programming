#include "main.h"
#include <stdio.h>
/**
 * _abs - check absolute value.
 *
 * @n: variable
 *
 * Return: absolute value.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
	}
	return (n);
}
