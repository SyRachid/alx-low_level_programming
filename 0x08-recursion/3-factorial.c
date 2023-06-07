#include "main.h"
/**
 * factorial-function to print factorial of number
 *
 * @n: a number to give factorial
 *
 * Return:fact
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
