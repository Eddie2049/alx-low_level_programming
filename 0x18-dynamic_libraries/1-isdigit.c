#include "main.h"

/**
 * _isdigit - checks for a digit(0-9)
 * @c: param to be checked
 *
 * Return: 1 - success else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
