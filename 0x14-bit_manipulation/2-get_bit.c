#include"main.h"

/**
 * get_bit - returns the val. of a bit at given index.
 * @n: param 1. number to check bits in
 * @index: param 2. index
 *
 * Return: int. value of the bit, or -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	div = 1 << index;
	check = n & div;
	if (check == div)
		return (1);
	return (0);
}
