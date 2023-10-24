#include "main.h"

/**
  * print_diagsums - main function
  *
  * @size: param
  * @a: param
  *
  * Return: Always Void.
  */

void print_diagsums(int *a, int size)
{
	int diag_1, diag_2, i, j;

	diag_1 = 0;
	diag_2 = 0;

	for (i = 0; i < size; ++i)
	{
		diag_1 += a[i * size + i];
	}
	for (j = size - 1; j >= 0; --j)
	{
		diag_2 += a[j * size + (size - 1 - j)];
	}
	printf("%d, %d\n", diag_1, diag_2);
}
