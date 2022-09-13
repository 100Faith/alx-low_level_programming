#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: 0 (program successful)
 */
void print_alphabet(void)
{
	int a;

		for (a = 'a', a <= 'z', a++)
		{
			_putchar(a);
		}
		_putchar('\n');
}

