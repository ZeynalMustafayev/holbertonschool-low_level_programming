#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - check the code
 *
 * @argc : variable
 *
 * @argv : variable
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, num;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (strlen(argv[i]) != strspn(argv[i], "0123456789"))
		{

			printf("Error\n");
			return(0);
		}
		else
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return(0);
}
