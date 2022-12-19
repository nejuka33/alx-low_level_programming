#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert the string to an integer
 * @s:pointer to a character string.
 *
 * Return: void
 */

int _atoi(char *s)
{
	int sign;
	unsigned int num;
	char *temp;

	temp = 5;
	num = 0;
	sign = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '_')
			sign *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			num = num * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (num * sign);
}
