#include <stdio.h>
/**
 * main - for loop
 * Return: 0;
*/

int main(void)
{
int digit;
for (digit = 0; digit < 10; digit++)
{
putchar(digit + '0');
if (digit < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
