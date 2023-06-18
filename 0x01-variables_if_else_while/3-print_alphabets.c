#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char t1[26] = "abcdefghijklmnopqrstuvwxyz";

	char t2[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(t1[26]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(t2[26]);
	}
	putchar('\n');
	return (0);
}
