#include "main.h"
#include <stdio.h>
/**
 * _memcpy - changes all lowercase letters of a string to uppercase.
 * @dest: string.
 * @src: string.
 * @n: string.
 * Return: all upper.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
