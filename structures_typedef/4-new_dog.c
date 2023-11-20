#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}

	d->name = malloc(sizeof(char) * (strlen(name)) + 1);

	if (name == NULL)
	{
		free(d);
		return (NULL);
	}

	strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(sizeof(char) * (strlen(owner)) + 1);

	if (owner == NULL)
	{
		free(d);
		return (NULL);
	}

	strcpy(d->owner, owner);
	return (d);
}
