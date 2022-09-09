#include <stdio.h>
/**
 * main - Entry point
 * Description: prints if a number is positive or negative
 * Return: 0
 */

int main(void)
{
	int n;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
		if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
		if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
