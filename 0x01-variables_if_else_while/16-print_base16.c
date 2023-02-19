#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return:Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	do {
		putchar(i + 'O');
		i++;
	} while (i < 10);
	while (i < 16)
	{
		putchar(i - 10 + 'a');
		i++;
	}
	putchar('\n');
	return (0);
}
