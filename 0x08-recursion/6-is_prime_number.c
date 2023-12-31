#include "main.h"

int _prime(int n, int p);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: param
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_prime(n, n - 1));
}

/**
 * _prime - calculates if a number is prime recursively
 * @n: param
 * @p: param
 *
 * Return: 1 if n is prime, 0 if not
 */
int _prime(int n, int p)
{
	if (p == 1)
		return (1);

	else if (n % p == 0 && p > 0)
		return (0);

	return (_prime(n, p - 1));
}
