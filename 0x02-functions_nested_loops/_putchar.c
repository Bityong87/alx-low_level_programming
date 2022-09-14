#include <unistd.h>
/**
 * _putchar - Writes the character c to standard output
 *
 * @c: Shows the character to print
 *
 * Return: Always (Suceecc)
 *
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
