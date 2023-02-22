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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(((i * j) / 10) + '0');
			_putchar(((i * j) % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
