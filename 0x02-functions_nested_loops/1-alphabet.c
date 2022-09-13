#include "main.h"

/**
 *print_alphabet - fuction tha print the alpherbet
 *description: it going to print lowercase
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
