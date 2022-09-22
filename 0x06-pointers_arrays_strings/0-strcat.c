#include "main.h"
/**
 * *_strcat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int first;
	int second;

	for (first = 0; dest[first] != '\0'; first++)
	{
	}
	for (second = 0; src[second] != '\0'; second++, first++)
	{
		dest[first] = src[second];
	}
	dest[first] = '\0';
	return (dest);
}
