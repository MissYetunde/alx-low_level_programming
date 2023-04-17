#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: A pointer to the struct dog variable to be initialized.
 * @name: A pointer to a string to be assigned to the name field of struct dog.
 * @age: dog age
 * @owner: dog owner
 *
 * Return: null
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
