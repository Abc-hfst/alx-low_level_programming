#include <stdio.h>

/**
 * main -> assign a random number to the variable n each time it is executed
 *
 * and print the last digit of the number stored in the variable n
 * Return: alway 0 (succss)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10); /* ascii code 4 new line*/

	return (0);
}
