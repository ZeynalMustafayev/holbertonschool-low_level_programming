#include "main.h"
/**
 * print_line - prints every lines
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar ('_');
	}
	if (a <= 0)
	{
		_putchar (' ');
	}
	_putchar ('\n');
}
