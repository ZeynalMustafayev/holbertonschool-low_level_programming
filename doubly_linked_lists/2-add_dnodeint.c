#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - prints each element of linked list with lengths.
 *
 * @head: first node of linked list.
 *
 * @n: the text of new node.
 *
 * Return: the number of nodes in given linked list.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ar;

	ar = malloc(sizeof(size_t));
	if (ar == NULL)
		return (NULL);
	ar->n = n;
	ar->prev = NULL;
	ar->next = *head;

	if ((*head) != NULL)
	{
		(*head)->prev = ar;
	}
	(*head) = ar;
	return (ar);
}
