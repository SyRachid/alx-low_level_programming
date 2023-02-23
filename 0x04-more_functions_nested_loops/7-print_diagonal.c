#include "main.h"
/**
 * print_diagonal - function to print in the terminal a diagnonal
 *
 * @n:input which define the number of "\\" character
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		 }
	}
}
