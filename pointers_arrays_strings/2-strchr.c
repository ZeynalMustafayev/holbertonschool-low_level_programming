#include "main.h"
#include <stdio.h>

/**
 * _strchr - Something useful
 * dest: Something more useful
 * src: Something more useful
 * n - Something more useful
 * @s: Something more useful
 * @c: Something more useful
 *
 * Return: Something much more useful
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
