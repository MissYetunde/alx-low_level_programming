#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - creates a new dog
* @name: pointer to the name string of the new dog
* @age: age of the new dog
* @owner: pointer to the owner string of the new dog
*
* Return: pointer to the new dog, or NULL if allocation fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	/* Allocate memory for the dog struct */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory and copy the name string */
	new_name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_name, name);

	/* Allocate memory and copy the owner string */
	new_owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_owner, owner);

	/* Set the fields of the new dog */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
