#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - length of string
 * @x : variable
 * @y : variable
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
