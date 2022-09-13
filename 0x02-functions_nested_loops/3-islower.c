#include "main.h"

/**
 * _islower - check for lower casecharcter
 * @c: The charcter checked
 *
 * Return: 1 if c is a lowercase, ohterwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
