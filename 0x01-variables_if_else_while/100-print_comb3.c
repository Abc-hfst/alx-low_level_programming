#include <stdio.h>

/**
 *main -> assign a random number to the variale n each time it is executed
 *
 *and print the last digit of the number stored in the variable nReturn: always 0 (ccesss)
 */

int main(void)
{
int ch;
int n;

for (ch = 48; ch <= 57; ch++)
{
for (n = 49; n <= 57; n++)
{
if (n > ch)
{
ptchar(ch);
putchar(n);
if (ch != 56 || n != 57)
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);
}
