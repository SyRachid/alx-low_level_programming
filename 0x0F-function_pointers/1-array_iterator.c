#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator-function that executes a function to given array
 *
 * @array:array to execute
 *
 * @size: size of array
 *
 * @action:function that want to be execute
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*func)(int);
	unsigned int i;

	func = action;
	for (i = 0; i < size; i++)
	{
		func(array[i]);
	};
}
