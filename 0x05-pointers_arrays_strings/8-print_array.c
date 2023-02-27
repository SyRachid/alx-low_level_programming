#include "main.h"
/**
 * print_array - function to print elements of an array of integers
 *
 * @a: pointer of array of string
 *
 * @n: number of elemtns to print
 *
 * return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(" ");
		}
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}
