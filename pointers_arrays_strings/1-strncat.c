#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncat - Something useful
 * @dest: Something more useful
 * @src: Something more useful
 * @n: Something more useful
 *
 * Return: Something much more useful
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = strlen(dest);

	while (a < n && *(src + a) != '\0')
	{
		*(dest + b + a) = *(src + a);
		a++;
	}
	return (dest);
}
