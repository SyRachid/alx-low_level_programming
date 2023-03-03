#include "main.h"
/**
 * cap_string -function to capitalizes all words of a string
 *
 * @str: the input of function
 *
 * Return: str
 */

char *cap_string(char *str)
{
	char *p = str;
	int cap_next = 1;

	while (*p)
	{
		if (cap_next && isalpha(*p))
	{
			*p = toupper(*p);
			cap_next = 0;
		}
		else if (strchr("\t\n,;.!?\"(){}", *p))
		{
			cap_next = 1;
		}
		p++;
	}
	return (str);
}
