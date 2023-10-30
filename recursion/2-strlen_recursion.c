#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - length of string
 * @s : variable
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	return (*s ? 1 + _strlen_recursion(s + 1) : 0);
}
