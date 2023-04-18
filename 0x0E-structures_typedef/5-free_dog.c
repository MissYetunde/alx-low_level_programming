#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees memory allocated for a dog
* @d: pointer to the dog to be freed
*
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free memory for name string */
		if (d->name != NULL)
			free(d->name);

		/* Free memory for owner string */
		if (d->owner != NULL)
			free(d->owner);

		/* Free memory for the dog struct */
		free(d);
	}
}
