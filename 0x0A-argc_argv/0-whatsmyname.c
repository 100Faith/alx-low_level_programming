#include <stdio.h>
#include "main.h"
/**
 * main - prints the program name.
 * @argc: number of command line arguments.
 * @argv: contains the program command line arguments.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
