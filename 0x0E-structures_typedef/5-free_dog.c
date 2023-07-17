#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees your dogs
 * @d: your dog
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
