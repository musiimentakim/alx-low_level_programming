#include <stdio.h>
/**
 * main - Entrypoint
 * Description: 'print out integers from 0 to 9 using putchar'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	number = 0;
	for (; number < 10; number++)
	{
		putchar(number + '0');
	}
	putchar(*"\n");
	return (0);
}
