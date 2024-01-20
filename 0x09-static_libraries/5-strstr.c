#include "main.h"

/**
  * _strstr - main function
  *
  * @needle: param
  *
  * @haystack: param
  *
  * Return: always 0.
  */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *i = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
			return (haystack);

		++haystack;
	}
	return (0);
}
