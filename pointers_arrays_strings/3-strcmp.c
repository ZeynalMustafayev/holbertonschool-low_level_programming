#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcmp - Something useful
 * @s1: Something more useful
 * @s2: Something more useful
 *
 * Return: Something much more useful
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0, i;

	int len;

	len = (strlen(s1) > strlen(s2)) ? strlen(s1) : strlen(s2);
	for (i = 0;  i < len; i++)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			result = *(s1 + i) - *(s2 + i);
			break;
		}
	}
	return (result);
}
