#include "main.h"
/**
 * print_sign - check lowercase.
 *
 * @n: variable
 *
 * Return: if positive 1, zero 0, negative -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
		else if (n <= -1)
		{
			_putchar ('-');
			return (-1);
		}
			else
			{
				_putchar ('0');
				return (0);
			}
}
