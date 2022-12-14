#include "main.h"
#include <unistd.h>
/**
 * _putchar - Function
 * @character: parameter
 * Description: 'print out the character passed as an argument'
 * Return: Always 1 (Success)
 */

int _putchar(char character)
{
	return (write(1, &character, 1));
}
