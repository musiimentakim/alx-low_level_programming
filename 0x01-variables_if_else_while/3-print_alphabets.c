#include <stdio.h>
/**
 *main - Entrypoint
 *Description: 'prints out alphabet in lower and upper case'
 *Return: Always 0 (Success)
*/

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	for (letters = 'A'; letters <= 'Z'; letters++)
	{
		putchar(letters);
	}

	putchar(*"\n");
	return (0);
}
