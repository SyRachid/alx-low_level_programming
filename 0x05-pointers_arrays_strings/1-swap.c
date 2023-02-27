#include "main.h"
/**
 * swap_int - function to swap the values of two integers
 *
 * @a:first int
 *
 * @b:second int
 *
 *Return :void
 */

void swap_int(int *a, int *b)
{
	int swaper;

	swaper = *a;
	*a = *b;
	*b = swaper;
}
