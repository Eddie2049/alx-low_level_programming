#include "3-islower.h"

/**
 * _islower - check for lower case chars
 *
 * @c: the character to check case
 * Return: always 0 or 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
