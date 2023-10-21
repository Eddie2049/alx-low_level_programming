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
	int yes_, add_;

	yes_ = 0;
	add_ = 0;
	p = s;
	

	for (; *s != '\0'; add_++)
	{
		if (*s  == ' ' || *s == '\t' || *s == '\n'
			|| *s == ',' || *s == ';' ||
			*s == '.' || *s == '!' || *s == '?'
			|| *s == '"' || *s == '(' ||
			*s == ')' || *s == '{' || *s == '}')
		{}
			if (*s >= 'a' && *s <= 'z')
				*s -= 32;
			yes_ = 0;
		}
		s++;
	}
	return (p);
}
