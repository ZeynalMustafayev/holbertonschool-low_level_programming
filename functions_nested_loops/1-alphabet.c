#include "main.h"

/**
 * print_alphabet - prints every character of alphabet
 */
void print_alphabet(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz\n";

	int b = 0;

	while (a[b] != '\0')
	{
		_putchar(a[b]);
		b++;
	}
}
