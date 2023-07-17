#include "dog.h"
#include <stdio.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(ni1)";
	if (d->owner == NULL)
		d->owner = "(ni1)";

	printf("Name; %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
