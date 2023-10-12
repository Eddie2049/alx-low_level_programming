#include "_putchar.h"
#include "9-times_table.h"

/**
 * times_table - 9's time table
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int res_;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res_ = i * j;
			if (res_ <= 9)
			{
				_putchar('0' + res_);
			}
			else if (res_ > 9)
			{
				_putchar('0' + res_ / 10);
				_putchar('0' + res_ % 10);
			}

			if (j < 9 && res_ <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (j < 9 && res_ > 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
