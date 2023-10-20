#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i = 2;
	unsigned long n = 612852475143

	while (i != n)
	{
		if (n % i == 0)
		{
			n = n / i;
			i = 1;
		}
		i++;
	}
	printf("%lu\n", n);
	return (0);
}
