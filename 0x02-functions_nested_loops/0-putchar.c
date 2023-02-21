#include "main.h"
/**
 * main -Entry point
 *
 * Return:Always 0 (Success)
 */

int main(void)
{
	int i;
	char tab[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (i = 0; i < 8; i++)
	{
		_putchar(tab[i]);
	}
	_putchar('\n');
	return (0);
}
