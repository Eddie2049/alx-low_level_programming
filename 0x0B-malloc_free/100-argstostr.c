#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry	concatenates
 * all the arguments of your program
 * @ac: param 1
 * @av: param 2
 * Return: char * pointer
 */

char *argstostr(int ac, char **av)
{
	int i, j, r = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;

	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		s[r] = av[i][j];
		r++;
	}

	if (s[r] == '\0')
	{
		s[r++] = '\n';
	}
	}
	return (s);
}
