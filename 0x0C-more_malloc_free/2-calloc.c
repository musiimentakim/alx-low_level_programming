#include <stdlib.h>
#include "main.h"
/**
 * _setzero - set bytes to 0.
 * @dest: pointer to destination.
 * @size: of the memory
 * Return: pointer to dest.
*/

void *_setzero(void *dest, unsigned int size)
{
	char *dest1;

	dest1 = dest;

	do {
		*dest1++ = 0;
	}

	while (--size != 0);

	return (dest1);
}

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size of the type
 * Return: pointer to mem location
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	_setzero(ptr, nmemb * size);
	return (ptr);
}
