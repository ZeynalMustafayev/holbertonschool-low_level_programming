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
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit < 5)
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d and is 0\n", n, last_digit);
	}
	return (0);
}
