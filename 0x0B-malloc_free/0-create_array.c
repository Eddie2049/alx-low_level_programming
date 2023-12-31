#include "main.h"
#include <stdlib.h>

/**
 * create_array - enty. create array of size size and assign char c
 * @size: param, size of array
 * @c: param,char to assign
 * Return: char * pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
