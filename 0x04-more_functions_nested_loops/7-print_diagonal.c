#include "main.h"
/**
 * print_diagonal - prints a diagonal line 
 *
 * @n: number of times a diagonal line is printed
 *
 * Return: no return
 */
void print_diagonal(int n)
{
	int line;
	int empty;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
		for (empty = 0; empty < line; empty++)
		{
		_putchar(' ');
		}	
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
