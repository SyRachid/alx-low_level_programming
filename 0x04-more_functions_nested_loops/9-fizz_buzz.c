#include <stdio.h>
/**
 * main - function to print 1 to 100 with multiple of 3 fizz
 * and multiple of 5 buzz and multiple of 15 fizzbuzz
 *
 * Return: ALways 0 (success)
 */

int main(void)
{
	int i;


	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}

