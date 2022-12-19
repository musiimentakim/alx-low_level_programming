#include "main.h"
/**
 * swap_int - Function
 * @a: Parameter
 * @b: Parameter
 * Description: ' function that swaps the values of two integers.'
 * Return: None
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
