#include "function_pointers.h"
/**
 * int_index- function to find an index of integer
 *
 * @array: array of integers
 *
 * @size: size of array
 *
 * @cmp: function to compare value
 *
 * Return: integer;
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int integer = -1;

	if (array == NULL || cmp == NULL)
	{
		return (integer);
	}
	if (size <= 0)
	{
		return (integer);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			integer = i;
			break;
		}
	}
	return (integer);
}
