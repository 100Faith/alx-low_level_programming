#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Sum of two diagonals of a square matrix of integers
 * @a: 2d Array of a matrix
 * @size: size of a matrix
 * REturn: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	i = 0;
	while (i < size)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - i - 1);
			i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
