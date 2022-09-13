#include "main.h"

/**
 * print_sign -function to checke sign number
 * @n: charcter to variefied
 *
 * Return: retun 0 or 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
}
	elser if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar(0);
	return (0);
	}
}
