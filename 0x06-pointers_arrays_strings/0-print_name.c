#include "function_pointers.h"
/**
 * print_name- function to print a name
 *
 * @name:pointer of char
 *
 * @f:function pointer 
 * 
 * Return:void
 */
void print_name(char *name, void (*f)(char*))
{

