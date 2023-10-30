#include "main.h"
#include <stdio.h>
/**
 * kvadrat - helper
 * @x: x
 * @y: y
 * Return: int
 */
int kvadrat(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	return (kvadrat(x + 1, y));
}
/**
 * _sqrt_recursion - duben
 * @n: n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (kvadrat(1, n));
}
