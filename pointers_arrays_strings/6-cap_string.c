#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - changes all lowercase letters of a string to uppercase.
 * @a: string.
 * Return: all upper.
 */
char *cap_string(char *a)
{
	int i, j;
	char b, c;

	j = strlen(a);
	i = 0;
	while (i < j)
	{
		b = *(i + a);
		c = *(i + a - 1);

		if (i == 0 && *(a + i) >= 97 && *(a + i) <= 122)
		{
			*(a + i) = b - 32;
		}
		else if ((c == ' ' || c == '\t' || c == '\n') && c >= 97 && c <= 122)
		{
			*(a + i) = b - 32;
		}
		else if ((c == '.' || c == '{' || c == '}') && c >= 97 && c <= 122)
		{
			*(a + i) = b - 32;
		}
		else if ((c == '!' || c == '?' || c == '"') && c >= 97 && c <= 122)
		{
			*(a + i) = b - 32;
		}
		else if ((c == ',' || c == '(' || c == ')') && c >= 97 && c <= 122)
		{
			*(a + i) = b - 32;
		}
		else if (i == ';' && c >= 97 && c <= 122)
		{
			*(a + i) = b - 32;
		}
		i++;
	}
	return (a);
}
