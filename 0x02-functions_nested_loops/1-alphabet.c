#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - fuction tha print the alpherbet
 *description: it going to print lowercase
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar (letter);
	}
	_putchar (10);
}
