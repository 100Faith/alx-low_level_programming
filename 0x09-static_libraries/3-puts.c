#include "main.h"
/**
 *  _puts - prints a string followed by a new line
 *
 *  @str: string to be printed
 *
 *  Return: no return
 */
void _puts(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar ('\n');
}
