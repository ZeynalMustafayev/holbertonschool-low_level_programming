#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - prints each element of linked list with lengths.
 *
 * @h: struct that provides string, length and address of next node.
 *
 * Return: the number of nodes in given linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
