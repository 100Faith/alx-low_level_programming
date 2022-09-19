#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer one
 * @b: pointer two
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;

	*a = *b;
	*b = t;
}