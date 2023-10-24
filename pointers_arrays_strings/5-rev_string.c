#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse the string
 * @s : s string
 */
void rev_string(char *s)
{
	int n;

	n = strlen(s);
	while (n != -1)
	{
		if (*(s + n) == '\0')
		{
			n--;
			continue;
		}
		putchar(*(s + n));
		n--;
	}
	putchar('\n');
}
