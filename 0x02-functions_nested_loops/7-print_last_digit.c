#include "main.h"
#include <limits.h>
/**
 * print_last_digit - prints the last digit of a number
 * @c: the character to extract the last digit from
 * Return: return the value of the last digit
 */
int print_last_digit(int c)
{
	if (c > 0 || c == 0)

	{
	_putchar (c % 10 + '0');
	return (c % 10);
	}
	else
	{
	c = c * -1;
	_putchar (c % 10 + '0');
	return (c % 10);
	}
}
