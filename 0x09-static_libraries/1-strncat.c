#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 *  @dest: destination
 *  @src: source
 *  @n: possible number of characters to concatenate
 *
 *  Return:  a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int first;
	int second;

	for (first = 0; dest[first] != '\0'; first++)
	{
	}
	for (second = 0; src[second] != '\0' && second < n; second++, first++)
	{
		dest[first] = src[second];
	}
	dest[first] = '\0';
	return (dest);
}
