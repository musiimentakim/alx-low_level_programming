#include "main.h"
/**
 * _islower - Fuction
 * @c: Parameter
 * Description: 'checks whether argument is lowercase or not'
 * Return: Always 1 (success) and 0 otherwise
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
