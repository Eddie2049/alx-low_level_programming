#include "main.h"

/**
 * leet - 7-leet.c
 * @s: param
 * Return: char * pointer
*/

char *leet(char *s)
{
	char *p;
	int i;

	char leet_1[] = "aAeEoOtTlL";
	char leet_2[] = "4433007711";

	p = s;

	while (*s != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*s == leet_1[i])
				*s = leet_2[i];
		}
		s++;
	}
	return (p);
}
