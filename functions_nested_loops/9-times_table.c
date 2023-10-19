#include "main.h"

/**
 * times_table - Entry point
 * return abs(n);
 * Return:0
 */
void times_table(void)

{
	int i;
	int j;
	int mul;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
	{
		mul = i * j;
		if (mul >= 10)
		{
			_putchar (',');
			_putchar (' ');
			_putchar (mul / 10 + '0');
			_putchar (mul % 10 + '0');
		}
		else
		{
			if (j == 0)
		{
				_putchar (mul + '0');
		}
			else
		{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				_putchar (mul + '0');
		}
		}
	}
		_putchar('\n');
	}
}
