#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memset - changes all lowercase letters of a string to uppercase.
 * @s: string.
 * @b: string.
 * @n: string.
 * Return: all upper.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
