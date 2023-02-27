#include <stdio.h>
#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers
 *
 * @a: int array to display from
 * @n: number of elements to display
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i < n - 1)
	{
	printf(", ");
	}
	}
	printf("\n");
}
