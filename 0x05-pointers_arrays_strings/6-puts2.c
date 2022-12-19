#include "main.h"
/**
 * puts2 - Function
 * @str: Parameter
 * Description: 'Half the lies they tell about me aren't true'
 * Return: None
 */

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
