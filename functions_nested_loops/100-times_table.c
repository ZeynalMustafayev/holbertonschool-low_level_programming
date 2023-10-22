#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 * starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
		int a, b, sum;

		if (n >= 0 && n <= 15)
		{
			for (a = 0; a <= n; a++)
			{
				_putchar('0');

				for (b = 1; b <= n; b++)
				{
					_putchar(',');
					_putchar(' ');
					sum = a * b;

					if (sum <= 99)
						_putchar (' ');
					if (sum <= 9)
						_putchar (' ');
					if (sum >= 100)
					{
						_putchar((sum / 100) + '0');
						_putchar(((sum / 10)) % 10 + '0');
					}
					else if (sum <= 99 && sum >= 10)
					{
						_putchar((sum / 10) + '0');
					}
					_putchar((sum % 10) + '0');
				}
				_putchar('\n');
			}
		}
}
