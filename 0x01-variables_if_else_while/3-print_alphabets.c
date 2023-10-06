#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry
 *
 * Return: always 0
*/

int main(void)
{
	char lower_;
	char upper_;

	lower_ = 'a';
	upper_ = 'A';

	while (lower_ <= 'z')
	{
		putchar(lower_);
		lower_++;
	}

	while (upper_ <= 'Z')
	{
		putchar(upper_);
		upper_++;
	}
	putchar('\n');
	return (0);
}
