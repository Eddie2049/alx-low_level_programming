#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: param 1
 * @s2: param 2
 * @n: param 3
 * Return: char * pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	size_t len_s1, len_s2, len_copy, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
	{
		;
	}
	for (len_s2 = 0; s2[len_s1] != '\0'; len_s2++)
	{
		;
	}

	len_copy = (n >= len_s2) ? len_s2 : n;
	p = malloc(sizeof(char) * (len_s1 + len_copy + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		p[i] = s1[i];

	for (j = 0; j < len_copy; j++)
		p[len_s1 + j] = s2[j];

	p[len_s1 + len_copy] = '\0';
	return (p);
}
