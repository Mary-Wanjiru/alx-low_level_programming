#include <stdio.h>

/**
 * main- Entry point
 *
 * descripion: This program prints possible combinations of single-digits no.s
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);

		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
