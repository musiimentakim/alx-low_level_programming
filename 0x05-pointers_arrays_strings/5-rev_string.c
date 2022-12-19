#include "main.h"
/**
 * rev_string - Function
 * @s: parameter
 * Description: ' function that reverses a string.'
 * Return: None
 */

void rev_string(char *s)
{
	int a = 0, b = 0, ptr;

	while (s[a] != '\0')
	{
		a++;
	}
	a --;
	while (a > b)
	{
		ptr = s[a];
		s[a--] = s[b];
		s[b++] = ptr;
	}
}
