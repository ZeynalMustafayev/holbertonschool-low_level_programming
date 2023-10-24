#include "main.h"
#include <string.h>
#include "_putchar.c"
/**
 * print_rev - reverse the string
 * @s: string
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
void print_rev(char *s)
{
	int n;

	n = strlen(s);
	while (n != -1)
	{
		if (*(s + n) == '\0')
		{
			n--;
			continue;
		}
		_putchar(*(s + n));
		n--;
	}
	_putchar('\n');
}
