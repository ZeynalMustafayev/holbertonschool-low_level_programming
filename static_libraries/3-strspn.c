#include "main.h"
#include <stdio.h>
/**
 * _strspn - Something useful
 * @s: Something more useful
 * @accept: Something more useful
 *
 * Return: Something much more useful
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; *(s + j) != '\0'; j++)
			{
				if (*(s + i) == *(accept + j))
				c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
