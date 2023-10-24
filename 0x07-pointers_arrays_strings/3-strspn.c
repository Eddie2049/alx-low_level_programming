#include "main.h"

/**
  * _strspn - function that gets the length of a prefix substring.
  *
  * @s: param
  *
  * @accept: param
  *
  * Return: always 0.
  */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int i;

	i = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		++i;
		s++;
	}
	return (i);
}
