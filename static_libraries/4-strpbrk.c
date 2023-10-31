#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Something useful
 * @s: Something more useful
 * @accept: Something more useful
 *
 * Return: Something much more useful
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
