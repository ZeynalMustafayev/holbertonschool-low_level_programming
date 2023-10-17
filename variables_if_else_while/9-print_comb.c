#include <stdio.h>

/**
 * main - this program prints alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 1; a < 10; a++)
		if (a % 2 == 1)
		{
			putchar (',' + a);
		}
	putchar ('\n');
	return (0);
}
