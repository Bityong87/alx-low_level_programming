#include <stdio.h>
/**
 * main - Print all numbers of base 16 in lowercase followed by a new line
 *
 * Return: Always (Success)
 */
int main(void)
{
	char ch;
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
