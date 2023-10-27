#include "main.h"
int _recursion_1(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: param
 *
 * Return: int codesquare root
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	return (_recursion_1(n, 0));
}

/**
 * _recursion_1 - recurses to find the natural
 * square root of a number
 * @n: param 1
 * @i: param 2
 *
 * Return: int root
 */
int _recursion_1(int n, int i)
{

	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_recursion_1(n, i + 1));
}
