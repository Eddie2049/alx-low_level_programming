#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: param
 *
 * Return: char * pointer
*/

char *cap_string(char *s)
{
	char *p;
	int yes_;

	yes_ = 0;
	p = s;

	while (*s)
	{
		if (*s  == ' ' || *s == '\t' || *s == '\n'
			|| *s == ',' || *s == ';' ||
			*s == '.' || *s == '!' || *s == '?'
			|| *s == '"' || *s == '(' ||
			*s == ')' || *s == '{' || *s == '}')
		{
			yes_ = 1;
		}
		else if (yes_)
		{
			if (*s >= 'a' && *s <= 'z')
				*s -= 32;

			yes_ = 0;
		}
		s++;
	}
	return (p);
}
