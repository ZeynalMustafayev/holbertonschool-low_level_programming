#include <stddef.h>
/**
 * array_iterator - print a name in uppercase
 * @array: name of the person
 * @size: name of the person
 * @action: name of the person
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
