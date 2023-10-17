#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: no. of elements in the array
 *
 * Return: void
*/

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		fprintf(stderr, "..hey.. somethings wrong.\n");

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);

		else if (i == n - 1)
			printf("%d", a[i]);
	}
	printf("\n");
}
