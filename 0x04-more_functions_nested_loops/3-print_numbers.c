#include "main.h"
/**
 * print_numbers - Function
 * Descritpion: 'prints numbers'
 * Return: Always 0 success
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
