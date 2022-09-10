#include <stdio.h>
/**
 * main - Prints single numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
