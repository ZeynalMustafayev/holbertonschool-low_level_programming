#include <stddef.h>
/**
 * int_index - print a name in uppercase
 * @array: name of the person
 * @size: name of the person
 * @cmp: name of the person
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (0);
}
