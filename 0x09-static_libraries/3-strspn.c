#include "main.h"
/**
 * _strspn - Function that gets the length of a prefix substring.
 * @s: initial segment
 * @accept: bytes to take in
 * Return: number of bytes
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				count++;
				break;
			}
			temp++;
		}
		if (*temp == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}


