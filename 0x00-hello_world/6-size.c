# include <stdio.h>
/**
 * main - Print the size of various filesw
 *
 * Descripion: prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("char size: %lu bytes\n", sizeof(char));
	printf("int size: %lu bytes\n", sizeof(int));
	printf("long int size: %lu bytes\n", sizeof(long int));
	printf("long long int size: %lu bytes\n", sizeof(long long int));
	printf("float size: %lu bytes\n", sizeof(float));
	return (0);
}
