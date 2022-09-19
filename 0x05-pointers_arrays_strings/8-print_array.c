#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 *
 * @a:input array
 * @n:input n elements
 *
 * Return: no return
 */
void print_array(int *a, int n)
{
	int ctr;

	for (ctr = 0; ctr < n; ctr++)
	{
		if (ctr == 0)
		{
			printf("%d", a[ctr]);
		}
		else
		{
			printf(", %d", a[ctr]);
		}
	}
	putchar('\n');
}
