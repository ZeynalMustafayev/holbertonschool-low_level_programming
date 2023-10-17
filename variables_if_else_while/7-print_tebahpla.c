#include <stdio.h>

/**
 * main - this program prints alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar ('\n');
	return (0);
}
