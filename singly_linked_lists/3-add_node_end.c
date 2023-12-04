#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - prints each element of linked list with lengths.
 *
 * @head: first node of linked list.
 *
 * @str: the text of new node.
 *
 * Return: the number of nodes in given linked list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;
	int c;

	for (c = 0; str[c] != '\0'; c++)
		;
	new_node = malloc(sizeof(size_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	last_node = *head;
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = c;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;
	return (*head);
}
