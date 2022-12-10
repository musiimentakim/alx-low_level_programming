#include <stdio.h>
/**
 * main - Entrypoint
 * Description: 'print all except q and e'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters == 'q' || letters == 'e')
		{
			continue;
		}
		else
		{
			putchar(letters);
		}
	}
	putchar(*"\n");
	return (0);
}
