#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - prints each element of linked list with lengths.
 *
 * @head: first node of linked list.
 *
 * @n: the text of new node.
 *
 * Return: the number of nodes in given linked list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ar;
	dlistint_t *end;

	ar = malloc(sizeof(size_t));
	if (ar == NULL)
		return (NULL);
	ar->n = n;
	ar->next = NULL;
	end = *head;
	if (*head == NULL)
	{
		ar->prev = NULL;
		*head = ar;
		return (ar);
	}

	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = ar;
	end = ar->prev;
	return (ar);
}
