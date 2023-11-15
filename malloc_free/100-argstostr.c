#include <stdlib.h>
#include "main.h"
/**
 * argstostr - prints buffer in hexa
 * @ac: the address of memory to print
 * @av: the size of the memory to print
 *
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
	char *ar;
	int i, j, soz, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = len = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			len++;
		}
		i++;
		len++;
	}
	len++;
	ar = malloc(sizeof(char) * len);
	if (ar == NULL)
		return (NULL);
	i = soz = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
		{
			ar[soz] = av[i][j];
			soz++;
			j++;
		}
		ar[soz] = '\n';
		soz++;
		i++;
	}
	return (ar);
}
