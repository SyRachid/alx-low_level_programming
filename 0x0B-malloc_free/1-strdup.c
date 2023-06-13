#include "main.h"
/**
 * _strdup- function wich return a pointer to the new value of strin
 *
 * @str -pointer of string
 *
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	char *ptr;
	int length = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = (char *) malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, str);
	return (str);
}
