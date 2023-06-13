#include "main.h"
/**
 * str_concat-function that concatenates two string.
 *
 * @s1:pointer to char
 *
 * @s2:pointer to char
 *
 * Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int length_s1;
	int length_s2;
	int total_length;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length_s1 = strlen(s1);
	length_s2 = strlen(s2);
	total_length = length_s1 + length_s2;
	ptr = (char *) malloc((total_length + 1) * sizeof(char));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
