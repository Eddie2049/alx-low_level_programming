#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k, size_2;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			size_2 = size - i - 2;
			for (k = 0; k <= size_2; k++)
				_putchar(' ');

			for (j = 0; j <= i; j++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
