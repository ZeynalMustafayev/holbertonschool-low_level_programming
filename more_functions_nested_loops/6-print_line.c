#include "main.h"
/**
 * print_line - prints every lines
 *
 * @n: variable
 *
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (a <= 0)
		{
			_putchar (' ');
		}
	_putchar ('_');
	}
	_putchar ('\n');
}
