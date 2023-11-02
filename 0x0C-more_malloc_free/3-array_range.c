#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: param 1
 * @max: param 2
 * Return: int * pointer
*/

int *array_range(int min, int max)
{
	int *p;
	int len_, i;

	if (min > max)
		return (NULL);

	len_ = max - min + 1;
	p = malloc(sizeof(int) * len_);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len_; ++i)
		p[i] = min, min++;

	return (p);
}
