#include "main.h"
/**
 * jack_bauer - function to count jack day's
 *
 * Return: return the jack all minute in a day .
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			if (hour < 10)
			{
				_putchar('0');
				_putchar(hour / 10);
			}
			else
			{
				_putchar((hour / 10) + '0');
				_putchar((hour % 10) + '0');
			}
			_putchar(':');
			if (minute < 10)
			{
				_putchar('O');
				_putchar(minute + '0');
			}
			else
			{
				_putchar((minute / 10) + '0');
				_putchar((minute % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
