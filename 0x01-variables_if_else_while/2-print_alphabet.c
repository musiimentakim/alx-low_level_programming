#include <stdio.h>
/**
 *main - Entrypoint
 *Description: 'listing alphabet using putchar'
 *Return: Always 0 (Success)
*/

int main(void)
{
	char letters[26] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i <= 26; i++)
	{
		putchar(letters[i]);
	}
	return (0);
}
