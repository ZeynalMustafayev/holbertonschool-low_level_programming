#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[] = "_putchar\n";

	int b = 0;

	while (a[b] != '\0')
	{
		_putchar(a[b]);
		b++;
	}
	return (0);

}
