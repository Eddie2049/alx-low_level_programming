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

	unsigned int i, j;

	i = 0;
	j = 0;
	while (*s != '\0')
	{
		for (i = 0; accept[i]; ++i)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (j);
		}
		++s;
	}
	return (j);
}
