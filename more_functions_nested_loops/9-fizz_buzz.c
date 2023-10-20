#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 1;

	for (; a <= 100; a++)
	{
		if (a % 5 == 0 && a % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", a);
		}
		if (a != 100)
			printf(' ');
	}
	putchar ('\n');
	return (0);
}
