#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers- function to print numbers with separator
 *
 * @separator: the char separator
 *
 * @n:number of integers
 *
 * Return:0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (separator != NULL)
		{
			if (i != (n - 1))
			{
				printf("%d%c ", x, *separator);
			}
			else
			{
				printf("%d", x);
			}
		}
		else if (separator == NULL)
		{
			if (i != (n - 1))
			{
				printf("%d ", x);
			}
			else
			{
				printf("%d", x);
			}
		}
	}
	printf("\n");
	va_end(args);
}
