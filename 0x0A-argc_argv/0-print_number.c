#include "main.h"
/**
 * print_number- function to print number
 *
 * @num: number to print
 *
 * Return:Always 0.
 */
void print_number(int num)
{
	if (num / 10)
	{
		print_number(num / 10);
		_putchar((num % 10) + '0');
	}
}
