#include <stdio.h>

/**
 * main -> assign a random number to the variable n each time it is executed
 *
 * and print the last digit of the number stored in the variable n
 * Return: always 0 (succeess)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}

	putchar(10); /*this is an aschi code 4 new line*/

	return (0);
}
