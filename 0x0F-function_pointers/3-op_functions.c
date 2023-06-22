#include "3-calc.h"
/**
 * op_add -function for sum
 *
 * @a:integer
 *
 * @b:integer
 *
 * Return 0.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub-function to substract
 *
 * @a:integer
 *
 * @b:integer
 *
 * Return:0;
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul-function to multiply
 *
 * @a:integer
 *
 * @b:integer
 *
 * Return:0;
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div-function that divide two numbers;
 *
 * @a:integer
 *
 * @b:integer
 *
 * Return:0;
 */
int op_div(int a, int b)
{
	return ((int)(a / b));
}
/**
 * op_mod-function to find a modulo of number
 *
 * @a:integer
 *
 * @b:integer
 *
 * Return:0;
 */
int op_mod(int a, int b)
{
	return ((int)(a % b));
}
