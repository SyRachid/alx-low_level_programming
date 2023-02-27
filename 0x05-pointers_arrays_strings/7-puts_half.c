#include "main.h"
/**
 * puts_half -function to print a half of a string
 *
 * @str: pointer to string
 *
 * return: void
 */

void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int middle_len = (len - 1) / 2;

	for (i = middle_len + 1; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
