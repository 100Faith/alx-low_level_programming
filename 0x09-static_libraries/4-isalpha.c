#include "main.h"
/**
 *  _isalpha -  checks for alphabetic character
 *
 *  @c: The character in ASCII code
 *  Return: Return 1 if letter is lowercase or uppercase
 *  and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);

	}
}
