#include "main.h"

/**
 * _puts - function that prints a string
 * @str: a param to _puts function
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
