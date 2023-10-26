#include "main.h"

int _pal(char *s, int l_, int r_);
int _strlen_rec(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	int len_;

	len_ = _strlen_rec(s);

	if (len_ == 0 || len_ == 1)
		return (1);

	return (_pal(s, 0, len_ - 1));
}

/**
 * _strlen_rec - length of a string
 * @s: string param
 *
 * Return: int length
 */
int _strlen_rec(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_rec(s + 1));
}

/**
 * _pal - checks the characters recursively for palindrome
 * @s: param 1
 * @l_: param 2
 * @r_: param 3
 *
 * Return: 1 if palindrome, 0 if not.
 */
int _pal(char *s, int l_, int r_)
{
	if (l_ > r_)
		return (1);

	else if (s[l_] == s[r_])
		return (_pal(s, l_ + 1, r_ - 1));

	else
		return (0);
}
