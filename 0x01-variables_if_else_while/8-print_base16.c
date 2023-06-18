#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char t[16] = "0123456789abcdef";

	int i;

	for (i = 0; i < 16 ; i++)
	{
		putchar(t[i]);
	}
	putchar('\n');
	return (0);
}
