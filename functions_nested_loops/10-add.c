#include "main.h"
#include <stdio.h>
/**
 * add - check lowercase.
 *
 * @a: variable1
 *
 * @b: variable2
 *
 * Return: result of addition
 */
int add(int a, int b)
{

	if (a > 0 && b > 0)
	{
		return (a + b);
	}
	else if (a < 0 && b > 0)
	{
		return ((-1 * a) + b);
	}
	else if (a > 0 && b < 0)
	{
		return (a + (-1 * b));
	}
	else
	{
		return (0);
	}
}
