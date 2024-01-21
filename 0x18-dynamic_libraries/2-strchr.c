#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: param
 * @c: param
 *
 * Return: char * pointer
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; ++i)
	{
		if (c == *s)
			return (s + i);

		++s;
	}
	return (0);
}
