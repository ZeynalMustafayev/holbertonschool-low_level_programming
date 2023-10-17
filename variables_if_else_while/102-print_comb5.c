#include <stdio.h>

/**
 * main - this program prints alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if ((10 * (a - 48) + (b - 48)) < (10 * (c - 48) + (d - 48)))
					{
					putchar (a);
					putchar (b);
					putchar (' ');
					putchar (c);
					putchar (d);
					if (!(a == 57 && b == 56 && c == 57 && d == 57))
					{
						putchar (',');
						putchar (' ');
					}
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);

}
