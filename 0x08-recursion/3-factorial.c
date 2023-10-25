#include "main.h"

/**
  * factorial - calc. fact.
  *
  * @n: param
  *
  * Return: int. fact n.
  */

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
