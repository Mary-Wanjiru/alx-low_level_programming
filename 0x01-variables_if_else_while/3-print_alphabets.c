#include <stdio.h>

/**
 * main- Entry point
 *
 * descripion: This program that prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char c, d;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}

	putchar('\n');
	return (0);
}
