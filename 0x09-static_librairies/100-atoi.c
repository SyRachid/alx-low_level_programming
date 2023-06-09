#include "main.h"
#include <stdlib.h> 
/**
 * atoi - function to transform string to int
 *
 * @c: string to convert
 *
 */
int *_atoi(char *s)
{
	int num = atoi(s);
	int *nume = &num;

	return (nume);
}
