#include <unistd.h>

/**
 * _putchar.c - writes the character c stdout
 *
 * @c: The character to print
 * Return: o success 1.
 * on error, - is returned, and erron is set appropriatly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
