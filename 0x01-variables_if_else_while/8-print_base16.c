#include <stdio.h>
/**
 * main - Entrypoint
 * Description: 'print numbers of base 16 in lowercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters;
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		putchar(numbers + '0');
	}
	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}
	putchar(*"\n");
	return (0);
}
