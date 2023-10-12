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
			if (j == 0)
			{
				_putchar(res + '0');
			}

			if (res_ < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(res_ + '0');
			} else if (res_ >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((res_ / 10) + '0');
				_putchar((res_ % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
