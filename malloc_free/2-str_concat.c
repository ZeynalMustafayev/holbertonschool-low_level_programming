#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * str_concat - prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: the size of the memory to print
 *
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
	int a, b;
	char *ar;
	int i;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	a = strlen(s1);
	b = strlen(s2);

	ar = malloc(sizeof(char) * (a + b) + 1);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		ar[i] = s1[i];

	for (i = 0; i < b; i++)
	{
		ar[i + a] = s2[i];
	}

	ar[i + a] = '\0';
	return (ar);
}
