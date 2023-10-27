#include "main.h"
int wildcmp(char *s1, char *s2);

/**
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 * @s1: param 1
 * @s2: param 1
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2 || *s2 == '*')
		return (wildcmp(s1 + 1, s2 + 1) || wildcmp(s1, s2 + 1));

	return (0);
}
