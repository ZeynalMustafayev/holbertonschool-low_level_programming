#include "main.h"
/**
 * _isalpha - check lowercase or uppercase.
 *
 * @c: variable
 *
 * Return: if islower or uppercase 1, otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
