#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - prints each element of linked list with lengths.
 *
 * @head: first node of linked list.
 *
 * Return: the number of nodes in given linked list.
 */
void free_list(list_t *head)
{
	list_t *next;

	next = malloc(sizeof(size_t));
	if (next == NULL)
	{
		free(next);
		return;
	}

	while (head != NULL)
	{
		next = head;
		head = head->next;
		free(next);
	}
}
