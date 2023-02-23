#include "main.h"
/**
 * print_most_numbers - the function to print number 0 to 9 without 2,4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 4 && i != 2)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
