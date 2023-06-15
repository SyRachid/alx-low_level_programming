#include "main.h"
#include <stdlib.h>
/**
 * main -Entry point
 *
 * @argc: number of arguments
 *
 * @argv: pointer containning a list of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	long int mul;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		_putchar(mul + '0');
		_putchar('\n');
	}
	return (0);
}
