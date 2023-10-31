#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - atoi
 * @s: var
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			num *= 10;
			num += s[i] - 48;
		}
		else
		{
			if (num != 0)
			{
				break;
			}
		}
		i++;
	}
	num *= sign;
	return (num);
}
