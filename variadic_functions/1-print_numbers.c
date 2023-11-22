#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Short description
 * @separator: First member
 * @n: First member
 *
 * Return: Always 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	int eded;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		eded = va_arg(ap, int);
		printf("%d", eded);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
