#include "main.h"
/**
 * factorial -  returns the factorial of a given number.
 * @n: integer.
 *
 * Return: factorial of n for success and -1 for error.
 */
int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		i = n * factorial(n - 1);
		return (i);
	}
}
