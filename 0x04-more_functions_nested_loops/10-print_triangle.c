#include "main.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: no return
 */
void print_triangle(int size)
{
	int side1;
	int side2;
	int blank;
	int result;

	for (side1 = 1; side1 <= size; side1++)
	{
		blank = size - side1;
		result = size - blank;
		for (side2 = 1; side2 <= blank; side2++)
		{
			_putchar(' ');
		}
		for (side2 = 1; side2 <= result; side2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
