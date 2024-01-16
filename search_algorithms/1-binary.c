#include "search_algos.h"
/**
 * binary_search - a function that searches for a value in an array of integers
 *
 * @array: is a pointer to the first element of the array to search in
 *
 * @size:  is the number of elements in array
 *
 * @value:  is the value to search for
 *
 * Return: if true i, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	while (low < high)
	{
		mid = low + (high - low) / 2;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
		return (mid);
	}
	return (-1);
}
