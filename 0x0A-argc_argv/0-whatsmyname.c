#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 *
 * @argc:number of arguments
 *
 * @argv:a pointer of string that contains arguments
 *
 * Return:Always 0.
 */
int main(int argc, char* argv[])
{
	argc = argc + 1;
	printf("%s\n", argv[0]);
	return (0);
}
