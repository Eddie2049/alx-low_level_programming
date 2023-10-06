#include <stdio.h>
#include <stdlib.h>

/**
 * main -entry
 * prints some numbers
 * Return: always 0
 */

int main(void)
{
	int num_;

	for (num_ = 0; num_ <= 9; ++num_)
	{
		putchar(num_ + '0');
	}
	putchar('\n');
	return (0);
}
