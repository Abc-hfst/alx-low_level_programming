#include "main.h"
/**
 * puts2 - a function that print every other character
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			contnue;
	}
	_putchar('\n');
}