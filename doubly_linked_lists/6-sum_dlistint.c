#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function that takes particular node given index.
 *
 * @head: given linked list.
 *
 * Return: particular node situated in given index.
 */
int sum_dlistint(dlistint_t *head) 
{ 
	dlistint_t *ptr = head; 
	int sum = 0; 
	while (ptr != NULL)
	{
		sum += ptr->n; 
		ptr = ptr->next; 
	}
	return (sum); 
} 
