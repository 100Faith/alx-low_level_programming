#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @n: integer with sign
 *
 * Return: 0 (success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
