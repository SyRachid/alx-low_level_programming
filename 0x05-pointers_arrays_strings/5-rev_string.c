#include "main.h"
/**
 * rev_string - function to reverse string
 *
 * @s: pointers to string
 *
 * return: void
 */

void rev_string(char *s)
{
	int i, j;
	int len = strlen(s);
	char reverse;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		reverse = s[i];
		s[i] = s[j];
		s[j] = reverse;
	}
}
