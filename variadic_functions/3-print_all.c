#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Short description
 * @format: First member
 *
 * Return: Always 0 (Success)
 */
void print_all(const char * const format, ...)
{
	va_list ar;

	int i = 0;
	char *soz;

	va_start(ar, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(ar, int));
				break;
			case 'i':
				printf("%d", va_arg(ar, int));
				break;
			case 'f':
				printf("%f", va_arg(ar, double));
				break;
			case 's':
				soz = va_arg(ar, char*);
				if (!soz)
					soz = "(nil)";
				printf("%s", soz);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	va_end(ar);
	printf("\n");
}
