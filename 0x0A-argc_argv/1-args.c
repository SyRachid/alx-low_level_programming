#include "main.h"
/**
 * main -Entry point
 *
 * @argc:number of arguments
 *
 * @argv:list of pointer
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	_putchar((argc - 1) + '0');
	argv[0] = "merci";
	_putchar('\n');
	return (0);
}
