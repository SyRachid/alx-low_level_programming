#include "main.h"
/**
 * leet- function to encode letter
 *
 * @str:input
 *
 * Return: str
 */

char *leet(char *str)
{
	char *p = str;
	char *leet_chars = "AaEeOoTtLl";
	char *leet_subs = "443300771";
	int i, j;


	for (i = 0; i < 8; i++)
	{
		for (j = 0; p[j] != '\0'; j++)
		{
			if (p[j] == leet_chars[i])
			{
				p[j] = leet_subs[i];
			}
		}
	}
	return (str);
}
