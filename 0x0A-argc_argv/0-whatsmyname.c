#include "main.h"
/**
 * main -Entry point
 *
 * @argc:number of arguments
 *
 * @argv:a pointer of string that contains arguments
 *
 * Return:Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	argc = argc + 1;
	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i = i + 1;
	}
	_putchar('\n');
	return (0);
}
