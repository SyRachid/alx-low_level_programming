#include "main.h"
/**
 * print_rev - function to print string in reverse
 *
 * @s: pointer on string
 *
 * return: void
 */

void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
