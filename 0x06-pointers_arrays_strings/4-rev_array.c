#include "main.h"
/**
 * reverse_array - function to reverse array of integers
 *
 * @a: the array to reverse
 *
 * @n:the number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int rev;

	for (i = 0; i < (n / 2); i++)
	{
		rev = a[i];
		a[i] = a[(n - i - 1)];
		a[(n - i - 1)] = rev;
	}
}
