#include "main.h"

/**
 * _abs - returns absolute value of an integer.
 *
 * @i: integer to be checked
 *  Return: always n | -n
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
