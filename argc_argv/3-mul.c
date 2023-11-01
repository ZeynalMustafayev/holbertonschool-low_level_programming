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
int main(int argc, char *argv[])
{
	int i;

	int result = 1;

	if (argc != 3)
	{
		printf("Error\n");
	}
	return 1;

	for (i = 1; i < argc; i++)
	{
		result = result * strtol(argv[i], NULL, 10);
	}
	printf("%d\n", result);
	return (0);
}
