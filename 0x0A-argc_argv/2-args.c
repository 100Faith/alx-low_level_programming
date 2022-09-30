#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives.
 *
 * @argc: number of command line arguments.
 * @argv: array pointer to string
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[1]);
	return (0);
}
