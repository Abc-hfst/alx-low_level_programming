#include <stdio.h>

/**
 * main -> assign a random number to the variable n each time it is executed
 *
 * and print the last digit of the number stored in the variable n
 * Return: always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}

	putchar(10); /* this is an aschii code 4new line */

	return (0);
}

