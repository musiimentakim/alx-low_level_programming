#include <stdio.h>
/**
 *main - Entrypoint
 *Description: 'listing alphabet using putchar'
 *Return: Always 0 (Success)
*/

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	putchar(*"\n");
	return (0);
}
