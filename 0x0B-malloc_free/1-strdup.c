#include "main.h"
/**
 * _strdup- function to duplicatepointer to string
 *
 * @str:pointer to string
 *
 * Return: ptr
 */
char *_strdup(char *str)
{
	char *ptr;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}
	length = strlen(str);
	ptr = (char *) malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	strcpy(ptr, str);
	return (ptr);
}
