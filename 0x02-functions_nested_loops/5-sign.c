#include "main.h"
/**
 * print_sign - to print a sign of a number
 *
 * @n: the input of function
 *
 * Return: 1 if sign is positive , 0 if is 0 and -1 if is negative
 */

int print_sign(int n)
{
	int c;

	if (n > 0)
	{
		_putchar('+');
		c = 1;
	}
	if (n == 0)
	{
		_putchar('0');
		c = 0;
	}
	if (n < 0)
	{
		_putchar('-');
		c = -1;
	}
	return (c);
}
