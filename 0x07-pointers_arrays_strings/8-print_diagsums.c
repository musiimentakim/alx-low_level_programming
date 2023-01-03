#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix of integers.
 *@a: pointer
 *@size: array size
 */
void print_diagsums(int *a, int size)
{
	int ctr1, ctr2;
	int sum, sum2 ;

	sum = 0;
	sum2 = 0;

	for (ctr1 = 0; ctr1 < size; ctr1++)
	{
		sum += a[(size + 1) * ctr1];
	}
	for (ctr2 = 0; ctr2 < size; ctr2++)
	{
		sum2 += a[(size - 1) * (ctr2 + 1)];
	}
	printf("%d, %d\n", sum, sum2);

}
