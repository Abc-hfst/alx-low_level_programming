#include "main.h"

/**
 *print_alphabet - fuction tha print the alpherbet
 *description: it going to print lowercase
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
