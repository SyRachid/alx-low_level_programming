#include "100-operations.h"
/**
 *add-function that make an addition of two numbers
 *
 *@a:first number
 *
 *@b:second number
 *
 *Return:sum
*/
int add(int a, int b)
{
    return a + b;
}
/**
 *sub-function that make a substraction of two numbers
 *
 *@a:first parameter
 *
 *@b:second parameter
 *
 *Return:subs
 */
int sub(int a, int b)
{
    return a - b;
}
/**
 *mul-function that multiply two number
 *
 *@a:first
 *
 *@b:second
 *
 *Return:The result
 */
int mul(int a, int b)
{
    return a * b;
}
/**
 *div-function to divise first number by second
 *
 *@a:first
 *
 *@b:second
 *
 *Return:the quotient
 */
int div(int a, int b)
{
    if (b != 0) {
        return a / b;
    } else {
        return 0; // Gestion de la division par zéro
    }
}
/**
 *mod-function that return the rest of division
 *
 *@a:first parameter
 *
 *@b:second parameter
 *
 *Return:the rest of division
 */
int mod(int a, int b)
{
    if (b != 0) {
        return a % b;
    } else {
        return 0; // Gestion de la division par zéro
    }
}

