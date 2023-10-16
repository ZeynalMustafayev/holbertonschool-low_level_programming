#include <stdio.h>

/**
 * main - this program prints alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}

	return (0);
}
