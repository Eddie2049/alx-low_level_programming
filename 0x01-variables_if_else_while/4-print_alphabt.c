#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 *
 * Return: always 0
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
		}
	}
	putchar('\n');
	return (0);
}
