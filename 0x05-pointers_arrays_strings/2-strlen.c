#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: sring param
 *
 * Return: int length of string
*/

int _strlen(char *s)
{
	int count;
	int i;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
