#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog_t struct or null otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	/* when name points to null or age negative or owner points to null*/

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	/* when ptr points to null otherwise allocate memory for type ptr*/
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	/*allocate memory for name and owner in struct ptr*/

	ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
	ptr->owner = malloc(sizeof(char) * (_strlen(name) + 1));
	/*if poiter to name or owner is null free up space allocated to these*/

	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}

	ptr->name = _strcpy(ptr->name, name);
	ptr->owner = _strcpy(ptr->owner, name);
	ptr->age = age;

	return (ptr);
}
