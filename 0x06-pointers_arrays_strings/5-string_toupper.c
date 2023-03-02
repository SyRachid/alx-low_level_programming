#include "main.h"
/**
 * string_toupper -function to transform lowercase to uppercase
 *
 * @n:input of function
 *
 * Return: str to uppercase
 */

char *string_toupper(char *n)
{
	int i;
	int len = sizeof(n);
	char c;

	for (i = 0; i < len; i++)
	{
		c = toupper(n[i]);
		n[i] = c;
	}
	return (n);
}
