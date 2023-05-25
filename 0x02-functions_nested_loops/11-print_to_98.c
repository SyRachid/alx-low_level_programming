#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -print all digit from n to 98
 *
 * @n: limit of the numbers
 *
 * Return:Always 0
 */

void print_to_98(int n)
{
	int i = 0;
	
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
				printf("%d",i);
				if (i < 98)
				{
					printf(",");
					printf(" ");
				}
				if (i == 98)
				{
					printf("\n");
				}
			}
		}
	if (n >= 98)
		{
			for (i = n; i >= 98; i--)
			{
				printf("%d",i);
				if (i > 98)
				{
					printf(",");
					printf(" ");
				}
				if (i == 98)
				{
					printf("\n");
				}
			}
		}
}
