#include "main.h"

/**
 * flip_bits - function counts the no. of bits to change
 * to get from one number to another
 * @n: param 1. first number
 * @m: param 2. second number
 *
 * Return: uint. number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count_ = 0;
	unsigned long int curr;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		curr = exclusive >> a;
		if (curr & 1)
			count_++;
	}

	return (count_);
}
