#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: character to be printed.
 *
 * Return: pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size);
		if (size == 0 || ptr == NULL)
			return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	if (!ptr)
		return (NULL);
	else
		return (ptr);
}
