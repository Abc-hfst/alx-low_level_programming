#include <stdio.h>

/**
 * main - asssign a random nber to the variable each time excuted
 *
 * and print the last digit of the number stored in variable n
 *
 * Return: always 0 (sucess)
 */

int main(void)
{
int ch;

for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
for (ch = 65; ch <= 90; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
