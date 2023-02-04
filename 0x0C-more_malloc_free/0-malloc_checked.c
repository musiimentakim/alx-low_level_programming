#include <stdlib.h>
#include <stdio.h>
/*#include <stddef.h>*/

/**
 * malloc_checked - function that allocates memory
 * @b: size of memory to allocate
 * Return: on success pointer to memory otherwise exit with status 98 
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(sizeof(b));
	if (pointer == NULL)
	{
		free(pointer);
		exit(98);
	}
	return (pointer);
}
