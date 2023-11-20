#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 * Return: Always 0 (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

	if (d == NULL)
	{
		free(d);
	}
	return (d);
}
