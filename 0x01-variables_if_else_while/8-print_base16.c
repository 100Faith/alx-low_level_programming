#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	char b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}

	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
