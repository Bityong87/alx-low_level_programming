#include <stdio.h>
/**
 * main - Prints the lowercasealphabets in revers follwed by a line
 *
 * Return: Always (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
