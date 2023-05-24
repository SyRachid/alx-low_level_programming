#include "main.h"
/**
 * print_last_digit - function to print the last digit of the number
 *
 * @c: input of the function
 *
 * Return: the last digit
 */

int print_last_digit(int c)
{
	 int last_digit;

	last_digit = abs(c % 10);
	_putchar('0' + last_digit);
	return (last_digit);
}
