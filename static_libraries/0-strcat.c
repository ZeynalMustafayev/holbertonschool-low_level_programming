#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - connect strings
 * @dest: destination
 * @src: source
 * Return: new string
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, n = strlen(dest);

	do {
		*(dest + n + a) = *(src + a);
		a++;
	}	while (*(src + a) != 0);
	return (dest);
}
