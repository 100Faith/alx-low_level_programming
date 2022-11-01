#include "main.h"
/**
 * get_endianness - checks the endianness.
 *
 * Return:  if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *) &i;

	return ((int)*c);
}
