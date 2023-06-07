#include "main.h"
/**
 * _pow_recursion- function to determine the pow of number
 *
 * @x:number
 *
 * @y:power
 *
 * Return: the value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
