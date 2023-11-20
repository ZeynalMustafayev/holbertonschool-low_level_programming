#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dog - Short description
 * @d: First member
 *
 * Description: Longer description
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d == NULL)
	{
		printf("Age: (nil)");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
