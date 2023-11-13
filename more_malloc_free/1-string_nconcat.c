#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: the address of memory to print
 * @n: the address of memory to print
 * Return: Nothing.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a1, a2, a3;
	unsigned int i = 0;
	char *a;

	a1 = strlen(s1);
	a2 = strlen(s2);
	a3 = a1 + a2 + 1;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	a = malloc(sizeof(char) * a3);

	if (a == NULL)
		return (NULL);

	if (n >= a2)
		n = a2;
	
	if (a2 == 0)
		return (' ');

	for (i = 0; i <= a1; i++)
	a[i] = s1[i];

	for (i = 0; i <= a2; i++)
	a[i + a1] = s2[i];

	a[i] = '\0';

	return (a);
}
