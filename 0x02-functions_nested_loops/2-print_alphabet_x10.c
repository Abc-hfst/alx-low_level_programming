#include "main.h"

/**
 * print_alphabet - fuunctin print_alpherbet 10 times
 * description: folloewd by newline
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
