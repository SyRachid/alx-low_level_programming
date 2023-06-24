#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings-funtcion to print string
 *
 * @separator: the separator of each arguments
 *
 * @n: numbers of arguments;
 *
 * Return:0;
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		char *x = va_arg(args, char*);

		if (x == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", x);
		}
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
