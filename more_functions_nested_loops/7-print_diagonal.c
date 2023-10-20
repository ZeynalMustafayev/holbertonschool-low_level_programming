#include "main.h"
/**
 * print_diagonal - ...
 *
 * @n: variable
 */
void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	while (a < n)
	{
		while (a > b)
		{
			_putchar (' ');
			b++;
		}
		_putchar ('\\');
		if (a != n - 1)
			_putchar ('\n');
		b = 0;
		a++;
	}
	_putchar ('\n');
}
