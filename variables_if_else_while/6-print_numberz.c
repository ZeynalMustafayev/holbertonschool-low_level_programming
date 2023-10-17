#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this program prints alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 1; a <= 10; a++)
		putchar((a % 10) + '0');
	putchar ('\n');
	return (0);
}
