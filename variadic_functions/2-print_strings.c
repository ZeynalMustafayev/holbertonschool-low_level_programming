#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Short description
 * @separator: First member
 * @n: First member
 *
 * Return: Always 0 (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	char *soz;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		soz = va_arg(ap, char *);
		printf("%s", soz);
		if (soz == NULL)
			printf("(nil)");
		else
		{
			printf("%s", soz);
		}

		if (separator != 0 && i < n - 1)
		printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
