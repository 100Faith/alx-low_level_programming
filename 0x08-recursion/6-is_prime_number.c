#include "main.h"
/**
 * check2 - checks if the number is prime
 * @a: int
 * @b: int
 *
 * Return: int
 */
int check2(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check2(a + 1, b));
}
/**
 * is_prime_number -  detects if integer is prime
 * @n: int
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check2(2, n));
}
