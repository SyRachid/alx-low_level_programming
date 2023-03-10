#include "main.h"
/**
 * times_table - function to print 9 times tables starting with 0
 *
 * Return: Always 0 (success)
 */

void times_table(void)
{
	int i;
	int j;
	int product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if (product >= 10)
			{
				if (j > 0)
				{
					_putchar(' ');
				}
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
				if (j < 9)
				{
					_putchar(',');
				}
			}
			if (product < 10)
			{
				if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(product + '0');
				if (j < 9)
				{
					_putchar(',');
				}
			}
		}
		_putchar('\n');
		}
}
