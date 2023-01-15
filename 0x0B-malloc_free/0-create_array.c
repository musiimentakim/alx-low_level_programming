#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - Function
 * @size: array size
 * @c: initializing character
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int itr = 0;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (; itr < size; itr++)
	{
		array[itr] = c;
	}
	return (array);
}
