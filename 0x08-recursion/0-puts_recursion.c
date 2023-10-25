#include "main.h"

/**
  * _puts_recursion - main function
  *
  * @s: param
  *
  * Return: void
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
