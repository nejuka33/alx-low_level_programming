#include <unistd.h>

/**
 * _putchar - arrays and string
 * @c: The character to print
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriatey
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
