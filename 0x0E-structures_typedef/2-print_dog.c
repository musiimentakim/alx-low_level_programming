#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Function that prints the struct
 * @d: ointer to the type dog structure
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
