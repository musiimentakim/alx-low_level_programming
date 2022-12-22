#include "main.h"
/**
 * rot13 - Function that encodes a string using rot13
 * @str: string to encode
 * Return: encoded string
 */

char *rot13(char *str)
{
	int itr1;
	int itr2;
	char arr[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G',
			'H', 'I', 'J', 'K', 'L', 'M', 'N',
			'O', 'P', 'Q', 'R', 'S', 'T', 'U',
			'V', 'W', 'X', 'Y', 'Z', 'a', 'b',
			'c', 'd', 'e', 'f', 'g', 'h', 'i',
			'j', 'k', 'l', 'm', 'n', 'o', 'p',
			'q', 'r', 's', 't', 'u', 'v', 'w',
			'x', 'y', 'z'};
	char key[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T',
			'U', 'V', 'W', 'X', 'Y', 'Z', 'A',
			'B', 'C', 'D', 'E', 'F', 'G', 'H',
			'I', 'J', 'K', 'L', 'M', 'n', 'o',
			'p', 'q', 'r', 's', 't', 'u', 'v',
			'w', 'x', 'y', 'z', 'a', 'b', 'c',
			'd', 'e', 'f', 'g', 'h', 'i', 'j',
			'k', 'l', 'm'};

	while (str[++itr1])
	{
		for (itr2 = 0; itr2 < 52; itr2++)
		{
			if (str[itr1] == arr[itr2])
			{
				str[itr1] = key[itr2];
				break;
			}
		}
	}
	return (str);
}
