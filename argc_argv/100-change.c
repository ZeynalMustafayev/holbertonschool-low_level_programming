#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * @argc : variable
 *
 * @argv : variable
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int coin, i = 0, cents = 0, currency[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[1][0] == 45)
		printf("0\n");
	else
	{
		coin = atoi(argv[1]);

		while (i < 5)
		{
			cents += coin / currency[i];
			coin %= currency[i];
			i++;
		}
		printf("%d\n", cents);
	}
	return (0);
}
