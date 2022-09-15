#include "main.h"
/**
 * print_square - prints a square
 *
 * @size: size of the square
 *
 * Return: no return
 */
void print_square(int size)
{
	int length;
	int width;

	for (length = 1; length <= size; length++)
	{
		for (width = 1; width <= size; width++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
