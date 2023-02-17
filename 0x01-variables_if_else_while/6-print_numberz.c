#include <stdio.h>

/**
 * main - Entry point
 *
 * description - prgram that prints all single sigit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = 48;

	while (d < 58)
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
