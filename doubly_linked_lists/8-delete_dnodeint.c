#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  * delete_dnodeint_at_index - add node at index
  * @head: head node
  * @index: index of value
  * Return: if sucess 1 if not -1
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;

	unsigned int i = 0;

	if (!*head)
		return (-1);
	node = (*head);
	if (index == 0)
	{
		if (node->next)
			node->next->prev = node->prev;
		(*head) = node->next;
		free(node);
		return (1);
	}
	while (node)
	{
		if (index == i)
		{
			if (node->next)
				node->next->prev = node->prev;
			if (node->prev)
				node->prev->next = node->next;
			free(node);
			return (1);
		}
		node = node->next;
		i++;
	}
	return (-1);
}
