#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to int to be swaped
 * @b: pointer to int to be swaped
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int *swap;
	int swap_;

	swap_ = *a;
	swap = &swap_;
	*a = *b;
	*b = *swap;
}
