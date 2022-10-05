#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @src: source
 * @dest: destination
 * @n: bytes of the memory location
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
