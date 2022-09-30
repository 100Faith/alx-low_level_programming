#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it
 *
 * @argc: argument count
 * @argv: array pointer to arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc)
		printf("%d\n", argc - 1);
	return (0);
}
