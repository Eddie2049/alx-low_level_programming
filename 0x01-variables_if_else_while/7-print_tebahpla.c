#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	char alef;

	for (alef = 'z'; alef >= 'a'; --alef)
	{
		putchar(alef);
	}
	putchar('\n');
	return (0);
}
