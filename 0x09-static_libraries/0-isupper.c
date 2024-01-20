#include "main.h"

/**
 * _isupper - checks for uppercase char
 * @c: char to be checked
 *
 * Return: always 1(success) else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
