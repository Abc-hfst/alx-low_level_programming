#include <stdio.h>

/**
 * main - assign a random number to the varaiblen each time excuted
 * and print the last digit of the number storedf in variable n
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar(10); /*this aschi code for new line*/

	return (0);
}
