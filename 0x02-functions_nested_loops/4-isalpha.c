#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character
 * @c: checks for alphabetic character
 *
 * Return: 1 if character is a letter,0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
