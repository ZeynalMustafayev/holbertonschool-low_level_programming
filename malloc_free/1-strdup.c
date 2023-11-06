#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - prints buffer in hexa
 * @str: the address of memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *ar;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	ar = malloc(sizeof(str) * (i + 1));

	if (ar == NULL)
		return (NULL);

	while (str[j])
	{
		ar[j] = str[j];
		j++;
	}
	return (ar);
}
