#include <stdio.h>

/**
 * main - this program prints alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a <= 15; a++)
	{
		putchar(a++);
	}
	putchar ('\n');
	return (0);
}
