#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main-Entry point
 *
 * @argc:number of argument
 *
 * @argv:argument
 *
 * Return:0;
 */
int main(int argc, char *argv[])
{
	int (*func)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0  || strcmp(argv[2], "%") == 0) && strcmp(argv[3], "0") == 0)
	{
		printf("Error\n");
		exit(100);
	}
	func = get_op_func(argv[2]);
	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
