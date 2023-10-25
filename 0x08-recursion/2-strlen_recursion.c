#include "main.h"

/**
  * _strlen_recursion - returns the length of a string
  *
  * @s: param
  *
  * Return: Int Length
  */
int _strlen_recursion(char *s)
{
	int l_;

	l_ = 0;
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		l_++;
		return (l_ + _strlen_recursion(s + 1));
	}
}
