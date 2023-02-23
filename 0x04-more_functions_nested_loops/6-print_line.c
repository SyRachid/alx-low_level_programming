#include "main.h"
/**
 * print_line - to print a straight line
 *
 * @n: input to specify number of straight
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
