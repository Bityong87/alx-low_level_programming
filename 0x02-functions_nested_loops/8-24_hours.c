#include "main.h"
/**
 * jack_bauer - prints every minute of the dayof jack bauer,
 * starting from 00:00 to 23:59, min loop counts min,
 * whule hour loop counts hours and reset mins
 * Return: return the value of the last digit
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_reminder;
	int mins_reminder;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
		mins_reminder = minutes % 10;
		hours_reminder = hours % 10;
		_putchar(hours / 10 + '0');
		_putchar(hours_reminder + '0');
		_putchar(':');
		_putchar(minutes / 10 + '0');
		_putchar(mins_reminder + '0');
		minutes++;
		_putchar('\n');
	}
	hours++;
	minutes = 0;
	}
}
