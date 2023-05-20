#include <stdio.h>

/**
 * main- Entry point
 *
 * descripion: This program that prints all the numbers of base 16
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int a;
	char c;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
