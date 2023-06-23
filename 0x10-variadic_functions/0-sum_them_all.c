#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all-function to sum all arguments
 *
 * @n:first parameters
 *
 * Return:0;
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int sum;

	if (n == 0)
		return (0);
	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
