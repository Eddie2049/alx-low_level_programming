#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - function sets value of a bit to 0 at given index
 * @n: param 1.
 * @index: param 2. index
 * Return: 1 if success, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
