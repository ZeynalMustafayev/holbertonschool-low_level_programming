#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse the string
 * @s : s string
 */
void rev_string(char *s)
{
	int i = 0, n;
	char tmp;

	while (*(s + i) != 0)
	{
		i++;
	}
	n = i - 1;
	i = 0;
	while (i <= n / 2)
	{
		tmp = *(s + i);
		*(s + i) = *(s + n - i);
		*(s + n - i) = tmp;
		i++;
	}
}
