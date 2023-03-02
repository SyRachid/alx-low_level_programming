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
	char *c = n;

	while (*c)
	{
		*c = toupper(*c);
		c++;
	}
	return (n);
}
