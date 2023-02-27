#include "main.h"
/**
 * puts2 -function to print every other character of a string
 *
 * @str: pointer to string
 *
 * return: void
 */

void puts2(char *str)
{
	int i = 0;
	int len = strlen(str);

	do {
		_putchar(str[i]);
		i = i + 2;
	} while (i < len);
	_putchar('\n');
}
