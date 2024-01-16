#include "search_algos.h"
/**
 * linear_search - a function that searches for a value in an array of integers
 *
 * @array: is a pointer to the first element of the array to search in
 *
 * @size:  is the number of elements in array
 *
 * @value:  is the value to search for
 *
 * Return: if true i, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int print_message = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			if (print_message)
			{
				printf("Found at index: %lu\n", i);
			}
			printf("Found at index: %lu\n", i);
			return (i);
		}
	}
	return (-1);
}
