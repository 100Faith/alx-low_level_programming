#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry	point
 * Description: prints the alphabet in lowercase then in uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch = 'Z'; ch++)
	{
		putchar(ch);
	}
	puchar('\n')
		return (0);
}
