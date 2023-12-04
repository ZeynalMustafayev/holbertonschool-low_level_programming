#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - prints elements lengths.
 *
 * @h: struct that provides string, length and address of next node.
 *
 * Return: the number of nodes in given linked list.
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
