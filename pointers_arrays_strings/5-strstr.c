#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - substring
 * @haystack: main string
 * @needle: substring
 * Return: substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	int counter = 0;

	int length = strlen(needle);

	while (*(haystack) != '\0')
	{
		while (*(needle + i) != '\0')
		{
			if (*(haystack + i) == *(needle + i))
				counter++;
			i++;
		}
		i = 0;
		if (counter == length)
			return (haystack);
		counter = 0;
		haystack++;
	}
	return (NULL);
}
