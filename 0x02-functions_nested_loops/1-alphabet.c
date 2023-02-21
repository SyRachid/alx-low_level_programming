#include "main.h"

/**
 * print_alphabet - print the value of alphabet
 *
 * Return:Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	do {
		_putchar(c);
		c++;
	} while (c <= 'z');
	_putchar('\n');
}

