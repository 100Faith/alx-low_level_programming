#include "main.h"
/**
 * leet -  encodes a string into 1337
 *
 * @s: string pointer
 *
 * Return: *s
 */
char *leet(char *s)
{
	int i;
	int j;
	char small[] = "aeotl";
	char big[] = "AEOTL";
	char rep[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; small[j] != '\0' && big[j] != '\0'; j++)
		{
			if (s[i] == small[j] || s[i] == big[j])
			{
				s[i] = rep[j];
			}
		}
	}
	return (s);
}
