#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * komek1 - length of string
 * @s : variable
 * Return: integer
 */
int komek1(char *s)
{
	if (*s)
	{
		s++;
		return (1 + komek1(s));
	}
	return (0);
}
/**
 * komek2 - length of string
 * @str : variable
 * @a : variable
 * @b : variable
 * Return: integer
 */
int komek2(char *str, int a, int b)
{
	if (b >= a)
		return (1);
	if (str[a] == str[b])
		return (komek2(str, a - 1, b + 1));
	return (0);
}
/**
 * is_palindrome - length of string
 * @s : variable
 * Return: integer
 */
int is_palindrome(char *s)
{
	int a = komek1(s);
	int b = 0;

	return (komek2(s, a - 1, b));
}
