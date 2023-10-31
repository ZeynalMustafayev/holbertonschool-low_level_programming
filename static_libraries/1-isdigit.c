#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check digit.
 *
 * @c: variable
 *
 * Return: result of digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
