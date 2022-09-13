#include "main.h"

/**
 * print_alphabet - fuunctin print_alpherbet 10 times
 * description: folloewd by newline
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
