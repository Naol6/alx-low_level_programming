#include <stdio.h>

/**
 * print_alphabet - Prints the lowercase alphabet 10 times, followed by a new line
 * Return: Always 0
*/
void print_alphabet_x10(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 97; j <= 122; j++)
{
_putchar(j);
}
}
_putchar('\n');
}
