#include "main.h"
/**
 * print_alphabet_x10 - print_alphabet_10_times
 *
 * Return:ALways 0
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		do {
			_putchar(c);
			c++;
		} while (c <= 'z');
		_putchar('\n');
	}
}
