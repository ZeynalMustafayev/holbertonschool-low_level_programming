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
		b = *(a + i);
		c = *(a + i - 1);

		if (i == 0 && *(a + i) >= 97 && *(a + i) <= 122)
		{
			*(a + i) = b - 32;
		}
		else if ((c == ' ' || c == '\t' || c == '\n') && b >= 97 && b <= 122)
		{
			*(a + i) = b - 32;
		}
		else if ((c == '!' || c == '?' || c == '"') && b >= 97 && b <= 122)
		{
			*(a + i) = b - 32;
		}
		else if ((c == '.' || c == '{' || c == '}') && b >= 97 && b <= 122)
		{
			*(a + i) = b - 32;
		}
		else if ((c == ',' || c == '(' || c == ')') && b >= 97 && b <= 122)
		{
			*(a + i) = b - 32;
		}
		else if (i == ';' && b >= 97 && b <= 122)
		{
			*(a + i) = b - 32;
		}
		i++;
	}
	return (a);
}
