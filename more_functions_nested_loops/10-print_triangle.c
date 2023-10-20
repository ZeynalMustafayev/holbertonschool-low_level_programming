#include "main.h"
/**
 * print_triangle - ...
 *
 * @size: variable
 */
void print_triangle(int size)
{
	int a;
	int b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			if (b < size - a - 1)
			{
				_putchar (' ');
			}
			else
			{
				_putchar ('#');
			}
		}
		if (a < size - 1)
		{
			_putchar ('\n');
		}
	}
	_putchar ('\n');
}
