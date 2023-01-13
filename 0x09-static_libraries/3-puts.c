#include "main.h"
/**
 * _puts - Function
 * @str: Parameter
 * Description: 'I do not fear computers. I fear the lack of them'
 * Return: None
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0' ; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
