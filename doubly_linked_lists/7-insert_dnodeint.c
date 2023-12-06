#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that takes particular node given index.
 *
 * @h: given linked list.
 *
 * @idx: index
 *
 * @n: count
 *
 * Return: particular node situated in given index.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *prev_node = *h;
	unsigned int c = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (new_node)
	{
		new_node->n = n;
		if (idx == 0)
		{
			if (*h)
			{
				new_node->next = *h;
				prev_node->prev = new_node;
			}
		(*h) = new_node;
		return (new_node);
		}
		while (c < idx - 1 && prev_node)
		{
			prev_node = prev_node->next;
			c++;
		}

		if (prev_node)
		{
			if (prev_node->next)
				prev_node->next->prev = new_node;
			new_node->next = prev_node->next;
			new_node->prev = prev_node;
			prev_node->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
