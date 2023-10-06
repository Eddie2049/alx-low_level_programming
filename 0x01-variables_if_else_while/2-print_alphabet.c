#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry
 *
 * Return: always 0
 */

int main(void)
{
	char start_char;

	start_char = 'a';
	while (start_char <= 'z')
	{
		putchar(start_char);
		start_char++;
	}
	putchar('\n');

	return (0);
}
