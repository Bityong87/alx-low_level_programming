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

	for (n = 0; n < 9; n++)
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
