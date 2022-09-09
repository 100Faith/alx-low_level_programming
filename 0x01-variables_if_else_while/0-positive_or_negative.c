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
		printf("is positive\n");
	}
	else
		if (n < 0)
	{
		printf("is negative\n");
	}
	else
		if (n == 0)
	{
		printf("is zero\n");
	}
	return (0);
}
