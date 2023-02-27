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
	int i;
	int len = strlen(str);

	for (i = 0; i < len ; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
