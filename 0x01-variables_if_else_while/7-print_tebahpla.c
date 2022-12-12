#include <stdio.h>
/**
 * main - Entrypoint
 * Description: 'print alphabet in reverse'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
	{
		putchar(letters);
	}
	putchar(*"\n");
	return (0);
}
