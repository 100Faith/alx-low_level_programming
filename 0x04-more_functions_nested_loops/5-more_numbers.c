#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: no return
 */
void more_numbers(void)
{
	int j;
	int a;

	for (j = 0; j < 10; j++)
	{
	for (a = 0; a < 15; a++)
	{
		if (a >= 10)
			_putchar((a / 10) + 48);
				_putchar((a % 10) + 48);
	}
	_putchar('\n');
	}
}
