#include <stdio.h>
/**
 * main - print the size of various types
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	int a;
	long long b;
	long long int c;
	char d;
	float f;


	printf("size of a int: %lu byte(s)\n", (unsigned long)(sizeof(a)));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)(sizeof(b)));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)(sizeof(d)));
	printf("size of a float: %lu byte(s)\n", (unsigned long)(sizeof(f)));

	return (0);
}
