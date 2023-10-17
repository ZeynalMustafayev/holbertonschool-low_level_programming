#include "main.h"

/**
 * print_alphabet_x10 - prints every character of alphabet
 */

void print_alphabet_x10(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz\n";

	int b = 0, c = 0;

	while (c < 10)
	{
		while (a[b] != '\0')
		{
			_putchar(a[b]);
			b++;
		}
		b = 0;
		c++;
	}
}
