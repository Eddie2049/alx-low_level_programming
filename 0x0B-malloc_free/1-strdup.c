#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char param
 * Return: char * pointer
 */

char *_strdup(char *str)
{
	char *p;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + 1));



	if (p == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)

		p[j] = str[j];

	return (p);
}
