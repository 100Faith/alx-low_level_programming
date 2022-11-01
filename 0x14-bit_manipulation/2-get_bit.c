#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to check
 * @index: index of the bit.
 *
 * Return: Value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val = (n >> index) & 1;

	return (bit_val);
}
