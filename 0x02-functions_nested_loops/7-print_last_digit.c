#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: The number will be printe
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (0);
}
