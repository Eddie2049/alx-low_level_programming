#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	char b_16;
	char b_16_a;

	for (b_16 = '0'; b_16 <= '9'; ++b_16)
	{
		putchar(b_16);
	}

	for (b_16_a = 'a'; b_16_a <= 'f'; ++b_16_a)
	{
		putchar(b_16_a);
	}
	putchar('\n');
	return (0);
}
