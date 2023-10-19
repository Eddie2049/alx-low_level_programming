#include "main.h"

/**
 * reverse_array - reverses content of array of ints
 * @a: array param
 * @n: number of elements in the array
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int f, l_, temp;

	f  = 0;
	l_ = n - 1;
	temp = 0;

	while (f < l_)
	{
		temp = a[f];
		a[f] = a[l_];
		a[l_] = temp;

		f++;
		l_--;
	}
}
