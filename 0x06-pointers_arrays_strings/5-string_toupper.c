#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @str: string that will be checked for lowercase letters
 *
 * Return: The resulting string str, where all the letters are uppercase
 */
char *string_toupper(char *str)
{
	int iter;

	for (iter = 0; str[iter] != '\0'; iter++)
	{
		if (str[iter] >= 97 && str[iter] <= 122)
		{
			str[iter] -= 32;
		}
	}
	return (str);
}
