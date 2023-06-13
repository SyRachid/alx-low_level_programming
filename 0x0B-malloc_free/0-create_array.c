#include "main.h"
/**
 * create_array -function to create a array of char
 *
 * @size:size of array
 *
 * @c: values to initialize the first value of array created
 *
 * Return: char created
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size != 0)
	{
		str = (char*) malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		return (str);
	}
	else
	{
		return (NULL);
	}
}
