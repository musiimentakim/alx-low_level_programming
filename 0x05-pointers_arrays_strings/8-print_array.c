#include "main.h"
#include <stdio.h>
/**
 * print_array - Function
 * @a: first parameter
 * @n: second parameter
 * Description: 'Function that prints an array of integers'
 * Return: None
 */

void print_array(int *a, int n)
{
	int iterator;

	if (n > 0)
	{
		for (iterator = 0 ; iterator < n; iterator++)
		{
			/*exclude comma and space for last character*/
			if (iterator != (n - 1))
			{
				printf("%d, ", a[iterator]);
			}
			else
			{
				printf("%d", a[iterator]);
			}
		}
	}
	printf("\n");
}
