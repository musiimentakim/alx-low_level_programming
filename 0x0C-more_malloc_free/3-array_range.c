#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Function that creates an int array arranged from min to max
 * @min: least number
 * @max: maximum number
 * Return: pointer to int array
 */

int *array_range(int min, int max)
{
	int *arr_ptr;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min;

	arr_ptr = malloc(sizeof(int) * (size + 1));
	if (arr_ptr == NULL)
	{
		return (NULL);
	}
	while (max > min)
	{
		arr_ptr[size] = max;
		size--;
		max--;
	}
	arr_ptr[size] = min;
	return (arr_ptr);
}
