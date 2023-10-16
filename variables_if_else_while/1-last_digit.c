#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
*This program generates a random number and compares it to 0
*/

/**
 * main - the main function of the program
 *Return: Always 0 (Success)
*/
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	}
	else if (digit < 6 && digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, digit);
	}
	return (0);
}
