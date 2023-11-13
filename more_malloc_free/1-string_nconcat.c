#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a1, a3;
        unsigned int i = 0;
	char *a;

	a1 = strlen(s1);
	n = strlen(s2);
	a3 = a1 + n + 1;

	a =malloc(sizeof(char) * a3);

	for(i = 0; i <= a1; i++)
	a[i] = s1[i];

	for(i = 0; i <= n; i++)
	a[i+a1] = s2[i];

	a[i]='\0';

	return a;
    
}
