#include "main.h"
/**
 * print_square - Function
 * @size: Size of the shape
 * Description: ' function that prints a square'
 * Return: None
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size <= 0)
			{
				break;
			}
			else
			{
			_putchar('#');
			}
		}
		_putchar('\n');
		_putchar('\n');
	}
}
