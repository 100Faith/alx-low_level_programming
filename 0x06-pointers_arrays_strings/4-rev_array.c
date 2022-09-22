#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers
 *
 * @a: array
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int fwd;
	int temp;

	for (fwd = 0; fwd < n / 2; fwd++)
	{
		temp = a[fwd];
		a[fwd] = a[n - fwd - 1];
		a[n - fwd - 1] = temp;
	}
}
