#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints the opcodes of the main function.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 if the program executed successfully
 */
int main(int argc, char *argv[])
{
	int i, numBytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	numBytes = atoi(argv[1]);

	if (numBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	unsigned char *mainAddress = (unsigned char *) main;

	for (i = 0; i < numBytes - 1; i++)
	{
		printf("%02x ", mainAddress[i]);
	}
	printf("%02x", mainAddress[i]);
	printf("\n");
	return (0);
}
