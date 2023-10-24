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

	while (*s != '\0')
	{
		if (c == *s)
			return (s);

		++s;
	}
	return (NULL);
}
