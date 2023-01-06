#include "main.h"

/**
 * _islower - Check if the character is lower case
 * @c: the character
 * Return: 1 if latter is lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
