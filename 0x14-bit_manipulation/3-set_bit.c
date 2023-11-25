#include "main.h"

/**
 * set_bit - func. sets the val of a bit to 1 at given index.
 * @n: param 1. number to set
 * @index: param 2. index
 *
 * Return: 1 if success, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set_ = 1 << index;
	*n = *n | set_;
	return (1);
}
