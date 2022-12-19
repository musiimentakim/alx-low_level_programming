#include "main.h"
/**
 * print_rev - print reverse characters
 * @s: validate the character
 * Return: Always 0
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	a--;
	for (; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
