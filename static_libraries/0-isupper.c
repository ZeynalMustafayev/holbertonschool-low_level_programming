#include "main.h"
#include <stdio.h>
/**
 * _isupper - check upperrcase.
 *
 * @c: variable
 *
 * Return: result of upper
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
