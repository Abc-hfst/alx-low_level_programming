#include "main.h"
/**
 * swap_int - a function that swaps the value of two integers
 * @a: input 1
 * @b: input 2
 * Return: two integer
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
