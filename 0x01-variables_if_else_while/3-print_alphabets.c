#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:Always 0 (Success)
 */

int main(void)
{
	char c = 'a';
	char d = 'A';

	do {
		putchar(c);
		c++;
	} while (c <= 'z');
	do {
		putchar(d);
		d++;
	} while (d <= 'Z');
	putchar('\n');
	return (0);
}

