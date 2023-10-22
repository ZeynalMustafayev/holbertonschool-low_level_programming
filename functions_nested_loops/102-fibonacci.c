#include <stdio.h>
#include<math.h>
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (a = 0; a < 50; a++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;

		if (a == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
