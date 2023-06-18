#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char t[26] = "abcdefghijklmnopqrstuvwxyz";

	for(int i=0;i<26;i++)
	{
		putchar(t[i]);
	} 
	return (0);
}
