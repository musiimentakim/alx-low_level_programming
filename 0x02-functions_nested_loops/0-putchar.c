#include "main.h"
/**
 * main - Entrypoint
 * Description: 'function that prints _putchar'
 * Return: Always 0 (Success)
 */

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}

/**
 * _putchar - Functiondefinition
 * @character: parameter of type char
 * Description: 'Prints out a character to the standard output
 * Return: Always 0 (Success)
 */

int _putchar(char character)
{
	putchar(character);
	return (0);
}
