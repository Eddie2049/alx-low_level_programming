#include "main.h"
#include <stdlib.h>

/**
 * str_concat - entry. function that concatenates two strings.
 * @s1: param 1
 * @s2: param 2
 * Return: char * pointer to concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';

	return (p);
	free(p);
}
