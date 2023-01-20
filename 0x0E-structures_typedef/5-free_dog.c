#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Function
 * @d: pointer to the structure
 * Return: None
 */
void free_dog(dog_t *d)
{
	/*when d points to nothing return otherwise free name, owner and d*/
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
