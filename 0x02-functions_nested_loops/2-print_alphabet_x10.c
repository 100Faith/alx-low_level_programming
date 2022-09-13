#include "main.h"
/**
 * print_10_times - prints 10 times the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
void print_10_times(void)
{
	int a;
	char letter;

		for (a = 0; a < 10; a++)
		{
			for (letter = 'a'; letter <= 'z'; letter++)
			{
				putchar(letter);
			}
			_putchar('\n');
		}
}
