#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - length of string
 * @s: variable
 * Return: integer
 */

void print_rev(char *s)
{
	int a, len, b;

	len = strlen(s);

	for (a = 0; a < len; a++)
	{
		b = s[a];
		s[a] = s[len - a - 1];
		s[len - a - 1] = b;
	}
}
