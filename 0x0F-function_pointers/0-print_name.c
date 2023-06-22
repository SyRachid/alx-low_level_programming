#include "function_pointers.h"
/**
 * print_name-function that print pointer
 *
 * @name:pointer to char
 *
 * @f:function to pointer
 *
 * Return:Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	void (*func)(char *);

	func = f;
	func(name);
}

