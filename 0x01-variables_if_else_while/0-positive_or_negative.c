#include <stdlib.h>
#include <time>
#include <stdio.h>

/**
 *main -> assign a random numer to the variable n each time it is executed
 *
 *and print the last digit of the number stored in the variable n
 *Return: always 0 (succsse)
 */

int main(void)
{
int n;

srand(time(0));
n = rand()  RAND_MAX / 2;

if (n > 0)
printf("%d is positive\n", n);
if (n == 0)
printf("%d is zero\n", n);
if (n < 0)
{
printf("%d is negetive\n", n);
}
return (0);
}
