#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: the character to check
 * Return: returns the absolute valute of int
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
