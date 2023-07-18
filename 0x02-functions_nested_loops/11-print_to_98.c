#include <stdio.h>
/**
 * print_to_98 - print natural number
 * @n: print the number
*/

void print_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
printf("\n");
}
