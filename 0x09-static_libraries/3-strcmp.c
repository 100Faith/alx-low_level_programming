#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the difference between the two srings
 */
int _strcmp(char *s1, char *s2)
{
	int first;
	int second;

	first = 0;
	second = 0;
	while ((s1[first] != '\0' || s2[first] != '\0') && second == 0)
	{
		if (s1[first] != s2[second])
		{
			second = s1[first] - s2[first];
		}
		first++;
	}
	return (second);
}
