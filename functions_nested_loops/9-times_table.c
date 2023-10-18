#include "main.h"
/**
 * times_table - check lowercase.
 */
void times_table(void)
{
	int a = 0, b = 0;

	while (a < 10)
	{
		while (b < 10)
		{
			if (a * b <= 9)
			{
				_putchar ((a * b) % 10 + '0');
			}
			else
			{
				_putchar ((a * b) / 10 + '0');
				_putchar ((a * b) % 10 + '0');
			}
			if (b != 9)
			{
				_putchar (',');
				if (a * (b + 1) <= 9)
				{
					_putchar (' ');
					_putchar (' ');
				}
				else
				{
					_putchar (' ');
				}
			}
			b++;
		}
		b = 0;
		a++;
		_putchar ('\n');
	}
}
