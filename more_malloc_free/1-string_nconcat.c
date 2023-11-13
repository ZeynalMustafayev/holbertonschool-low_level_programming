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
	unsigned int i, j;
	char *a;
	unsigned int sign = n;

	a1 = strlen(s1);
	a2 = strlen(s2);
	a3 = a1 + a2 + 1;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= a2)
	{
		sign = a2;
		a = malloc(sizeof(char) * a3);
	}
	else
		a = malloc(sizeof(char) * (a1 + n + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < a1; i + 1)
	{
		a[i] = s1[i];
	}

	for (j = 0; j < sign; j + 1)
	{
		a[i] = s2[j];
		i++;
	}
	a[i] = '\0';

	return (a);
}
