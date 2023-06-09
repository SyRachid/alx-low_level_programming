#include "main.h"
/**
 * main -Entry point
 *
 * @argv: a pointer to arguments
 *
 * @argc: number of argyments
 *
 * Return:Always 0;
 */
int main(int argc, char *argv[])
{
	int i;
	int j;

	for (i = 0; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			_putchar(argv[i][j]);
			j = j + 1;
		}
		_putchar('\n');
	}
	return (0);
}
