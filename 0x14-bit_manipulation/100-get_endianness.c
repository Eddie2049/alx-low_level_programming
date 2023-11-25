#include "main.h"

/**
 * get_endianness - funtion to checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i;
	char *p;

	i = 1;
	p = (char *)&i;
	return (*p);
}
