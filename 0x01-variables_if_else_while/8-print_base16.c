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
}
for (digit = 10; digit < 16; digit++)
{
putchar(digit - 10 + 'a');
}
putchar('\n');
return (0);
}
