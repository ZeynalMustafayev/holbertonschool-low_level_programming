#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - length of string
 * @s : variable
 * Return: integer
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
