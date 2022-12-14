#include "main.h"

/**
 * print_alphabet - printout alphabet
 * Description: 'pritn out alphabet'
 *
 */

void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}
