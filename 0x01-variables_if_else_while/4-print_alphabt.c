#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char t1[24] = "abcdfghijklmnoprstuvwxyz";

	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(t1[i]);
	}
	putchar('\n');
	return (0);
}
